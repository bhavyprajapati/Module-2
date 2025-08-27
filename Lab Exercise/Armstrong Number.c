#include<stdio.h>
#include<conio.h>

int isArmstrong(int num) 
{
    int original = num, remainder, result = 0;

    while (num != 0) 
	{
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    return (result == original);
}

int main() 
{
    int n, i;

    // Check if a given number is Armstrong
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    //  Find all Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for (i = 1; i <= 1000; i++) 
	{
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    getch();
}

