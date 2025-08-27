#include<stdio.h>
#include<conio.h>

int main() 
{
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
			{
            vowels++;
        }
        // Check for consonants 
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
		{
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') 
		{
            digits++;
        }
        // Check for special characters 
        else if (ch != ' ' && ch != '\n') 
		{
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    getch();
}

