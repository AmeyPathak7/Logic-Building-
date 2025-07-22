////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a20p1.c
// Description : Accept file name from user and open that file in read mode
// Input : Demo.txt
// Output : File opened successfully.
// Author : Amey Pathak
// Date : 11-06-2025
// Status : 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File opened successfully.\n");
        fclose(fp);
    }

    return 0;
}
