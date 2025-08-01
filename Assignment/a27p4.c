////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Assignment27_4.c
//  Description   : Program to copy only small characters from one string into another
//  Input         : "Marvellous multi OS"
//  Output        : "arvellousmulti"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char arr[30] = "Marvellous multi OS";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}
    