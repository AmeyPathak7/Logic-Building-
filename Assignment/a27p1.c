////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Assignment27_1.c
//  Description   : Program to copy the contents of a string into another string (like strcpy)
//  Input         : "Marvellous Multi OS"
//  Output        : "Marvellous Multi OS"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s\n", brr);

    return 0;
}
