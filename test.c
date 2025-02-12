#include <stdio.h>
#include <string.h>

// #define MAX_CHAR 256

// int longestUniqueSubstring(char *str) {
//     int n = strlen(str);

//     int lastIndex[MAX_CHAR];
//     for (int i = 0; i < MAX_CHAR; i++) {
//         lastIndex[i] = -1;
//     }

//     int maxLength = 0;
//     int start = 0;

//     for (int end = 0; end < n; end++) {
//         int charAscii = (int)str[end];
//         if (lastIndex[charAscii] >= start) {
//             start = lastIndex[charAscii] + 1;
//         }

//         lastIndex[charAscii] = end;

//         int currentLength = end - start + 1;
//         if (currentLength > maxLength) {
//             maxLength = currentLength;
//         }
//     }

//     return maxLength;
// }

// int main() {
//     char str[] = "abcabcbb";
//     int length = longestUniqueSubstring(str);
//     printf("%d", length);
//     return 0;
// }

// C program to illustrate Call by Reference
// #include <stdio.h>
// #include<limits.h>

// Defining a structure to represent a person
// typedef struct Person {
//     char name[50];
//     int age;
//     float height;
// } Person;

// int main() {
//     // Declaring a structure variable of type Person
//     Person p1;

//     // Assigning values to the members of the structure
//     strcpy(p1.name, "John Doe");  // Using strcpy() to assign a string
//     p1.age = 30;
//     p1.height = 5.9;

//     // Accessing and printing the structure members
//     printf("Name: %s\n", p1.name);
//     printf("Age: %d\n", p1.age);
//     printf("Height: %.1f\n", p1.height);

//     return 0;
// }

// int reverse(int x){
//     int res = 0;
//     while(x > 0){
//         res = 10*res + x%10;
//         x = x/10;
//     }

// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void sort(int *arr, int n)
// {
//     // Implementing a simple bubble sort for sorting
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             int x = arr[j], y = arr[j+1];
//             if (x > y)
//             {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {5,3,6,8};
//     sort(arr,4);

//     for(int i = 0; i< 4; i++){
//         printf("%d ",arr[i]);
//     }
// }

// // ------------------- reverse K nodes -----------------
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node{
//     int data;
//     struct node *next;

// }Node;

// Node *head = NULL;
// Node *NewHead = NULL;

// void Insert(int val){
//     Node *n = (Node *)malloc(sizeof(Node));
//     n->data = val;
//     n->next = NULL;

//     if(head == NULL){
//         head = n;
//         return;
//     }

//     Node *temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = n;

// }

// void disp(Node *head){
//     Node *temp = head;
//     while (temp != NULL){
//         printf(" %d -> ", temp->data);
//         temp = temp->next;
//     }

//     printf("\n");
// }

// Node* reverse( Node *previousNodes, Node *start, int k){
//     // if(previousNodes != NULL){
//     //     printf("\n\tprevious Node val %d\n\n", previousNodes->data);
//     // }

//     int c = 0;
//     Node* temp = start;
//     while(temp != NULL){
//         c++;
//         temp = temp->next;
//     }
//     if(c < k){
//         // printf("remaining nodes is less than %d", k);
//         return NULL;
//     }

//     Node *prev = NULL;
//     Node *cur = start;
//     Node *nex = NULL;

//     // printf("cur -> %d\n", cur->data);

//     while(cur != NULL && k > 0){
//         nex = cur->next;
//         cur->next = prev;
//         prev = cur;
//         cur = nex;
//         k--;
//     }

//     // if(cur != NULL && nex != NULL && prev != NULL){
//     //     printf("%d %d %d\n", prev->data, cur->data, nex->data);
//     // }

//     if(previousNodes != NULL){
//         previousNodes->next = prev;
//     }

//     // disp(NewHead);

//     while(prev != NULL && prev->next != NULL){
//         prev = prev->next;
//     }

//     prev->next = cur;

//     return prev;
// }

// int main(){

//     Insert(1);
//     Insert(2);
//     Insert(3);
//     Insert(4);
//     Insert(5);
//     Insert(6);
//     Insert(7);
//     Insert(8);

//     disp(head);
//     Node* start = head, *temp = head;
//     int i = 1;
//     int k = 3;
//     while(temp->next != NULL && i<k){
//         temp = temp->next;
//         i++;
//     }

//     NewHead = temp;

//     Node* previousNodes = NULL;

//     while(start != NULL && start->next != NULL){
//         previousNodes = reverse(previousNodes, start, k);
//         start = start->next;
//     }

//     // printf("%d\n", start->data);

//     disp(NewHead);

// }

// bit flip count to reach the goal from start
// int main(){
//     int start = 10;
//     int goal = 7;
//     int c = a ^ b;

//     int count = 0;
//     for(int i = c; i > 0; i = i>>1){
//         count += i & 1;
//     }

//     printf("%d\n",count);
// }

// #include<stdbool.h>
// bool isBalanced(char* num) {
//     int evenSum = 0, oddSum = 0, j = 0;
//     for(int i = num; i > 0; i /= 10){
//         if(j % 2 == 0){
//             evenSum += (i %  10);
//         }else{
//             oddSum += (i %  10);
//         }
//         j++;
//     }
//     return evenSum == oddSum;
// }

// int addDigits(int num) {
//     if(num / 10 == 0){
//         return num;
//     }
//     int sum = 0;
//     while(num > 0){
//         sum += num % 10;
//         num /= 10;
//     }
//     return addDigits(sum);
// }

// char* RLE(char *s){
//     int length = strlen(s);
//     char *res = (char*)malloc(sizeof(char) * (length*2) + 1);
//     int index = 0;
//     int i = 0;
//     while(i < length){
//         char c = count(s, i);
//         res[index++] = c;
//         res[index++] = s[i];
//         i += (c - '0');
//     }
//     res[index] = '\0';
//     // printf("%s",res);
//     return res;
// }

// char *countSay(int n){
//     if(n == 1){
//         return "1";
//     }

//     // if(n == 2){
//     //     return RLE("1");
//     // }

//     return RLE(countSay(n-1));
// }

// int jump(int* nums, int numsSize) {
//     int i = 0;
//     int Index = 0;
//     int jumps = 0;
//     while(i < numsSize){
//         i = i + jumps + nums[Index++];
//         jumps++;
//     }
//     return jumps;
// }

// int main(){
//     int nums[] = {2,1,2,1,4};
//     printf("%d ", jump(nums, 5));
// printf("%s", countSay(4));
// RLE("1");
// int a = addDigits(38);

// int a = 123;
// int count = 0;
// while(a > 0){
//     count += a % 10;
//     a = a / 10;
// }
// printf("%d", a);

// }


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Block
{
    int key;
    struct Block *next;
} Block;

int *GenArr(int size)
{
    int *Arr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        Arr[i] = i;
    }
    return Arr;
}

int LinearSearch(int target, int *Arr, int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if (Arr[i] == target)
            return i;
    }
    return -1;
}

int BinarySearch(int *Arr, int target, int start, int end)
{
    if (start > end)
    {
        return end + 1;
    }
    int middle = (start + end) / 2;
    if (Arr[middle] == target)
    {
        return middle;
    }
    else if (Arr[middle] > target)
    {
        return BinarySearch(Arr, target, start, middle - 1);
    }
    else
    {
        return BinarySearch(Arr, target, middle + 1, end);
    }
}

int hashFunction(int key, int SIZE)
{
    double fraction = key * 0.6180339887;
    fraction = fraction - (long long)fraction;
    return (int)(SIZE * fraction);
}

Block *createBlock(int key)
{
    Block *node = (Block *)malloc(sizeof(Block));
    node->key = key;
    node->next = NULL;
    return node;
}

void put(Block **hashTable, int key, int SIZE)
{
    int index = hashFunction(key, SIZE);
    Block *node = createBlock(key);
    node->next = hashTable[index];
    hashTable[index] = node;
}

int search(Block **hashTable, int key, int SIZE)
{
    int index = hashFunction(key, SIZE);
    Block *temp = hashTable[index];
    while (temp != NULL)
    {
        if (temp->key == key)
        {
            return index;
        }
        temp = temp->next;
    }
    return -1;
}

int main()
{
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);
    int Sizes[] = {100, 1000, 10000, 100000, 1000000};
    int n = sizeof(Sizes) / sizeof(Sizes[0]);

    printf("Linear Search:\n");
    printf("Input size \t time taken\n");
    for (int i = 0; i < n; i++)
    {
        int s = Sizes[i];
        int *Arr = GenArr(s);
        int target = s - 1;
        QueryPerformanceCounter(&start);
        int index = LinearSearch(target, Arr, s);
        QueryPerformanceCounter(&end);
        double time_taken = (double)(end.QuadPart - start.QuadPart) * 1e9 / frequency.QuadPart;
        printf("%d %20.2lf ns\n", s, time_taken);
        free(Arr);
    }

    printf("\n\nBinary Search:\n");
    printf("Input size \t time taken\n");
    for (int i = 0; i < n; i++)
    {
        int s = Sizes[i];
        int *Arr = GenArr(s);
        int target = s - 1;
        QueryPerformanceCounter(&start);
        int index = BinarySearch(Arr, target, 0, s);
        QueryPerformanceCounter(&end);
        double time_taken = (double)(end.QuadPart - start.QuadPart) * 1e9 / frequency.QuadPart;
        printf("%-7d %20.2lf ns\n", s, time_taken);
        free(Arr);
    }

    printf("\n\nDirect Search (Hash Table):\n");
    printf("Input size \t time taken\n");
    for (int i = 0; i < n; i++)
    {
        int s = Sizes[i];
        Block **hashTable = (Block **)malloc(sizeof(Block *) * s);
        for (int j = 0; j < s; j++)
        {
            hashTable[j] = NULL;
        }
        int *Arr = GenArr(s);
        int target = s - 1;
        for (int j = 0; j < s; j++)
        {
            put(hashTable, Arr[j], s);
        }
        QueryPerformanceCounter(&start);
        int index = search(hashTable, target, s);
        QueryPerformanceCounter(&end);
        double time_taken = (double)(end.QuadPart - start.QuadPart) * 1e9 / frequency.QuadPart;
        printf("%-7d %20.2lf ns\n", s, time_taken);
        free(Arr);
        free(hashTable);
    }
    return 0;
}