#include<stdio.h>
#include<conio.h>

int main() 
{
    int i;

    // break 
    printf("--- Using break (stop at 5) ---\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 5) 
		{
            break; 
        }
        printf("%d ", i);
    }
    printf("\n");

    // continue 
    printf("--- Using continue (skip 3) ---\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 3) 
		{
            continue; 
        }
        printf("%d ", i);
    }
    printf("\n");

    getch();
}

