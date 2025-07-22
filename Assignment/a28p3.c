////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a28p3.c
// Description : Accept file name from user, read all data from the file and display it
// Input : Demo.txt
// Output : Display all data of file
// Author : Amey Pathak
// Date : 11-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;
    char ch;

    printf("Enter the file name to read: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    printf("File contents:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}