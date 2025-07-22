////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Assignment27_2.c
//  Description   : Program to copy 'iCnt' characters of a string into another string (like strncpy)
//  Input         : "Marvellous Multi OS", 10
//  Output        : "Marvellous"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr, brr, 10);

    printf("%s\n", brr);

    return 0;
}
