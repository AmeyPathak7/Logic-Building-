////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a28p2.c
// Description : Accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully.
// Author : Amey Pathak
// Date : 11-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    printf("Enter the file name to create: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "w");

    if(fp == NULL)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File created successfully.\n");
        fclose(fp);
    }

    return 0;
}