////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a30p1.c
//  Description   : Program to check whether 15th bit is ON or OFF in a given number.
//                  Bit positions are considered from 1 (LSB) to 32 (MSB).
//  Input         : 32768
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
    UINT iMask = 0x00004000; // 15th bit mask
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
        printf("15th bit is ON\n");
    else
        printf("15th bit is OFF\n");

    return 0;
}
