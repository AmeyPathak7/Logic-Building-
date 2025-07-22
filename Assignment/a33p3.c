////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p3.c
//  Description   : Check whether 9th or 12th bit is ON in the given number.
//  Input         : 257
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = (1 << (9 - 1)) | (1 << (12 - 1));

    if(iNo & iMask)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
