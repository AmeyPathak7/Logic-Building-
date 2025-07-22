////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : Assignment22_2.c
// Description : Accept character and check whether it is capital (A-Z)
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

BOOL ChkCapital(char ch)
{
    return (ch >= 'A' && ch <= 'Z') ? TRUE : FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
        printf("It is Capital Character\n");
    else
        printf("It is not a Capital Character\n");

    return 0;
}
