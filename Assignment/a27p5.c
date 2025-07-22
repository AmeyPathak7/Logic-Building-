////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Assignment27_5.c
//  Description   : Program to concatenate second string after first string (like strcat)
//  Input         : "Marvellous Infosystems", "Logic Building"
//  Output        : "Marvellous InfosystemsLogic Building"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n", arr);

    return 0;
}
