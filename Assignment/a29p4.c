////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a29p4.c
//  Description   : Accepts file name and character from user, counts its frequency in the file.
//  Input         : Demo.txt M
//  Output        : Frequency of M is 7
//  Author        : Amey Pathak
//  Date          : 11-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountChar(char FName[], char ch)
{
    FILE *fp = NULL;
    char cTemp;
    int iCount = 0;

    fp = fopen(FName, "r");
    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while((cTemp = fgetc(fp)) != EOF)
    {
        if(cTemp == ch)
        {
            iCount++;
        }
    }

    fclose(fp);
    return iCount;
}

int main()
{
    char FileName[30];
    char cValue;
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue);  // leading space to consume newline

    iRet = CountChar(FileName, cValue);
    printf("Frequency of %c is %d\n", cValue, iRet);

    return 0;
}
