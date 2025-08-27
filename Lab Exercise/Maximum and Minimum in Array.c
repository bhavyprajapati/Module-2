#include<stdio.h>
#include<conio.h>

int main() 
{
    int arr[10], i, j, temp;
    int max, min;

    printf("Enter 10 numbes:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    // Find max and min
    for (i = 1; i < 10; i++) 
	{
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // Challenge: Sort array in ascending order (simple bubble sort)
    for (i = 0; i < 9; i++) 
	{
        for (j = i + 1; j < 10; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Array in ascending order: ");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
}

