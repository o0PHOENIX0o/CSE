#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define V 4
 
void createPolygon(int (*coordinates)[3], int color);
template <typename T>
void generate(T (*Matrix)[3], int (*coordinates)[3],int (*res)[3]);
 
int main(){
    int gdrive = DETECT, gmode;
    initgraph(&gdrive, &gmode, (char*)"");

    setbkcolor(WHITE);
    cleardevice();
    setcolor(COLOR(100,100,100));
    setlinestyle(DOTTED_LINE, 0, 1);
    line(0, getmaxy()/2, getmaxx(), getmaxy()/2); 
    line(getmaxx()/2, 0, getmaxx()/2, getmaxy()); 
    setlinestyle(SOLID_LINE, 0, 1);


    int coordinates[V][3] = {
        {0,  0, 1},
        {50,  0, 1},
        {50  ,100, 1},
        {0 ,  100, 1},
    };   
    
    int res[V][3] = {0};
    float angle = M_PI/2;
    double Rotation[3][3] = {
        {cos(angle), -sin(angle), 0},
        {sin(angle), cos(angle), 0},
        {0, 0, 1}
    };   
    
    createPolygon(coordinates, RED);
    generate(Rotation, coordinates, res);    
    createPolygon(res, GREEN);
    
    getch();
    closegraph();
    
}
 
template <typename T>
void generate(T (*Matrix)[3], int (*coordinates)[3],int (*res)[3]){
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < 3; j++) {
            res[i][j] = 0;
           for(int k = 0; k < 3; k++){
                res[i][j] += Matrix[j][k] * coordinates[i][k];    
           }
        }
    } 
}
void createPolygon(int (*coordinates)[3], int color){
    int xc = getmaxx()/2, yc = getmaxy()/2;
    setcolor(color);
    for(int i = 0; i < V; i++){
        int x1 = xc + coordinates[i%(V)][0],     y1 = yc - coordinates[i%(V)][1];
        int x2 = xc + coordinates[(i+1)%(V)][0], y2 = yc - coordinates[(i+1)%(V)][1];
        line(x1, y1, x2, y2);
    }
}
