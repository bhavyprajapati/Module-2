#include<stdio.h>
#include<conio.h>

int main() 
{
    FILE *fp;
    char str[100];

    fp = fopen("example.txt", "w");   
    if (fp == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string to write into the file: ");
    gets(str);   

    fprintf(fp, "%s", str);   
    fclose(fp);              

    fp = fopen("example.txt", "r");   
    if (fp == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) 
	{
        printf("%s", str);
    }

    fclose(fp);  
    getch();     
}

