#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, sum = 0, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;  

    while (temp != 0) 
	{
        digit = temp % 10;               
        sum += digit;                    
        reverse = reverse * 10 + digit;  
        temp /= 10;                     
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}

