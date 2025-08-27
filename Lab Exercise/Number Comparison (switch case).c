#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, c, largest, smallest;

    printf("Enter  number A : ");
    scanf("%d", &a);
    printf("Enter  number B : ");
    scanf("%d", &b);
    printf("Enter  number C : ");
    scanf("%d", &c);

    // Largest using switch
    switch ((a >= b) && (a >= c)) {
        case 1: largest = a; break;
        case 0:
            switch (b >= c) {
                case 1: largest = b; break;
                case 0: largest = c; break;
            }
    }

    // Smallest using switch
    switch ((a <= b) && (a <= c)) {
        case 1: smallest = a; break;
        case 0:
            switch (b <= c) {
                case 1: smallest = b; break;
                case 0: smallest = c; break;
            }
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    getch();
}

