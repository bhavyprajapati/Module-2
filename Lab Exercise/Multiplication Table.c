#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d (1 to 10):\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    getch();
}

