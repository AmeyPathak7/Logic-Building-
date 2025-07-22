////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : Assignment22_1.c
// Description : Accept character from user and check whether it is alphabet or not (A-Z, a-z)
// Input : F
// Output : TRUE
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
        printf("It is Character\n");
    else
        printf("It is not a Character\n");

    return 0;
}