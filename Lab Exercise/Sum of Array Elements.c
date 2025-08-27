#include<stdio.h>
#include<conio.h>

int main() 
{
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];   // variable length array

    // Input N numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // add to sum
    }

    // Calculate average
    average = sum / n;

    // Display results
    printf("Sum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", average);

    getch();
}

