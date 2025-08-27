#include <stdio.h>
#include <conio.h>

long factorial(int n);

int main() 
{
    int num;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is %ld\n", num, fact);

    getch();   
}

long factorial(int n) 
{
    long result = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;  
}

