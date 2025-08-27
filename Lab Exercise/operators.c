#include<stdio.h>
#include<conio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\n--- Arithmetic Operations ---\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);  
    } else {
        printf("Division and modulus not possible (b = 0)\n");
    }

    printf("\n--- Relational Operations ---\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    printf("\n--- Logical Operations ---\n");
    printf("(%d && %d) : %d\n", a, b, (a && b)); 
    printf("(%d || %d) : %d\n", a, b, (a || b)); 
    printf("!(%d)      : %d\n", a, !a);          

	getch();
}

