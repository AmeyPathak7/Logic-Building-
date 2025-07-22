////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a30p2.c
//  Description   : Program to check whether 5th and 18th bits are ON or OFF in a given number.
//  Input         : 262160
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
    UINT iMask = 0x00020010; // 5th (0x10) and 18th (0x20000)
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
        printf("5th and 18th bits are ON\n");
    else
        printf("5th and/or 18th bit is OFF\n");

    return 0;
}
