#include<stdio.h>
#include<conio.h>

int main() {
    // Constant declaration
    const float PI = 3.14159;   

    // Variable declarations
    int age = 20;               // integer variable
    char grade = 'A';           // character variable
    float height = 5.9;         // floating-point variable

    // Displaying values
    printf("Age (int)    : %d\n", age);
    printf("Grade (char) : %c\n", grade);
    printf("Height (float): %.2f\n", height);
    printf("PI (constant): %.5f\n", PI);

    getch();
}

