#include <stdio.h>
#include <conio.h>

int main() 
{
    int num = 10;       
    int *ptr;           

    ptr = &num;         

    printf("Initial value of num = %d\n", num);
    printf("Address of num = %p\n", ptr);

    *ptr = 25;          

    printf("Modified value of num = %d\n", num);
    printf("Value accessed through pointer = %d\n", *ptr);

    getch();           
   
}

