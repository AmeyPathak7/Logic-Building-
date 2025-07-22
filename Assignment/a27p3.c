////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Assignment27_3.c
//  Description   : Program to copy only capital characters from one string into another
//  Input         : "Marvellous Multi OS"
//  Output        : "MMOS"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}
