#include <stdio.h>
#include <conio.h>

int main() {
    int arr1[5], i;
    int arr2[3][3], j, sum = 0;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    printf("You entered (1D array): ");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", arr2[i][j]);
            sum += arr2[i][j];
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix = %d\n", sum);

    getch(); 
}

