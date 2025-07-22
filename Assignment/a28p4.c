////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a28p4.c
// Description : Accept file name from user and display size of file
// Input : Demo.txt
// Output : File size is 56 bytes
// Author : Amey Pathak
// Date : 11-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;
    int size = 0;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    printf("File size is %d bytes\n", size);

    fclose(fp);
    return 0;
}