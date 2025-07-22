////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a29p3.c
//  Description   : Accepts file name from user and counts number of white space characters from the file.
//  Input         : Demo.txt
//  Output        : Number of white spaces are 13
//  Author        : Amey Pathak
//  Date          : 11-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char FName[])
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
        if(ch == ' ')
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

    iRet = CountWhite(FileName);
    printf("Number of white spaces are %d\n", iRet);

    return 0;
}
