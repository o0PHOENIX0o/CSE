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
// C program to illustrate Call by Reference
#include <stdio.h>

// Defining a structure to represent a person
typedef struct Person {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    // Declaring a structure variable of type Person
    Person p1;

    // Assigning values to the members of the structure
    strcpy(p1.name, "John Doe");  // Using strcpy() to assign a string
    p1.age = 30;
    p1.height = 5.9;

    // Accessing and printing the structure members
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}
