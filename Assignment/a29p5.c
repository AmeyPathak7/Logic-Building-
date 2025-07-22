////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a29p5.c
//  Description   : Accepts file name and number, displays first N characters from the file.
//  Input         : Demo.txt, 12
//  Output        : Displays first 12 characters from file
//  Author        : Amey Pathak
//  Date          : 11-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char FName[], int iSize)
{
    FILE *fp = NULL;
    char ch;
    int i = 0;

    fp = fopen(FName, "r");
    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("First %d characters from file:\n", iSize);
    while((ch = fgetc(fp)) != EOF && i < iSize)
    {
        printf("%c", ch);
        i++;
    }

    printf("\n");
    fclose(fp);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    Display(FileName, iValue);

    return 0;
}
