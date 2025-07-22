////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a30p4.c
//  Description   : Program to check whether 7th, 8th, and 9th bits are ON or OFF in a given number.
//  Input         : 448
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0; // 7th (0x40), 8th (0x80), 9th (0x100)
    UINT iResult = iNo & iMask;

    if(iResult == iMask)
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
        printf("7th, 8th and 9th bits are ON\n");
    else
        printf("One or more bits among 7th, 8th and 9th are OFF\n");

    return 0;
}
