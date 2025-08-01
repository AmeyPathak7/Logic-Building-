////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : ChkDigit.c
//  Description   : Accept character from user and check whether it is a digit (0-9).
//  Input         : 7
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
        return TRUE;
    else
        return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
        printf("It is Digit\n");
    else
        printf("It is not a Digit\n");

    return 0;
}
