///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : A28_Q5_AppendToFile.c
// Description : Accept file name and string from user. Write string at the end of the file
// Input : Demo.txt Hello World
// Output : Write Hello World at the end of Demo.txt file
// Author : Amey Pathak
// Date : 11-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char FileName[30], Data[100];
    FILE *fp = NULL;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the string to append: ");
    scanf(" %[^\n]s", Data);  // space before %[ to skip newline

    fp = fopen(FileName, "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    fprintf(fp, "%s", Data);
    printf("Write \"%s\" at the end of %s file\n", Data, FileName);

    fclose(fp);
    return 0;
}