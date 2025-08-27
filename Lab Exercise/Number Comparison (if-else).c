#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, c;

    printf("Enter  number A : ");
    scanf("%d", &a);
    printf("Enter  number B : ");
    scanf("%d", &b);
    printf("Enter  number C : ");
    scanf("%d", &c);

    // Largest
    if (a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);

    // Smallest
    if (a <= b && a <= c)
        printf("Smallest: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest: %d\n", b);
    else
        printf("Smallest: %d\n", c);

    getch();
}

