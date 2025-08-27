#include<stdio.h>
#include<conio.h>

void reverseString(char str[]) 
{
    int i = 0, j = 0, temp;

    while (str[j] != '\0') 
	{
        j++;
    }
    j--; 

    
    while (i < j) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

    getch();
}

