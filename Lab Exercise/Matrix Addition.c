#include<stdio.h>
#include<conio.h>

int main() 
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix A:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of 3x3 matrix B:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix (A + B):\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    getch();
}

