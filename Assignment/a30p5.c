////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a30p5.c
//  Description   : Program to check whether 1st and 32nd bits are ON or OFF in a given number.
//  Input         : 2147483649
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
    UINT iMask = 0x80000001; // 1st bit: 0x00000001, 32nd bit: 0x80000000
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
        printf("1st and 32nd bits are ON\n");
    else
        printf("1st and/or 32nd bit is OFF\n");

    return 0;
}
