////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a29p1.c
//  Description   : Accepts file name from user and counts number of capital characters (A-Z) from the file.
//  Input         : Demo.txt
//  Output        : Number of capital characters are 23
//  Author        : Amey Pathak
//  Date          : 11-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char FName[])
{
    FILE *fp = NULL;
    char ch;
    int iCount = 0;

    fp = fopen(FName, "r");
    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
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
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);
    printf("Number of capital characters are %d\n", iRet);

    return 0;
}
