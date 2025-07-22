////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : ChkSmall.c
//  Description   : Accept character from user and check whether it is small case (a-z).
//  Input         : g
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
        printf("It is Small case Character\n");
    else
        printf("It is not a Small case Character\n");

    return 0;
}
