////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : Assignment22_3.c
// Description : Accept character and check whether it is digit (0-9)
// Input : 7
// Output : TRUE
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    return (ch >= '0' && ch <= '9') ? TRUE : FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
        printf("It is Digit\n");
    else
        printf("It is not a Digit\n");

    return 0;
}