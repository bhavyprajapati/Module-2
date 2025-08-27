#include<stdio.h>
#include<conio.h>

int fact(int n) 
{
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int comb(int n, int r) 
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Loop-based Pascal's Triangle 
void pascalLoop(int n) 
{
    int i, j, k, num;
    printf("\nPascal's Triangle using loops:\n");
    for (i = 0; i < n; i++) 
	{
        for (k = 0; k < n - i - 1; k++)
            printf(" ");
        num = 1;
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

// Recursive Pascal's Triangle 
void pascalRecursive(int n) {
    int i, j;
    printf("\nPascal's Triangle using recursion:\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", comb(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    pascalLoop(n);
    pascalRecursive(n);

    getch();
}

