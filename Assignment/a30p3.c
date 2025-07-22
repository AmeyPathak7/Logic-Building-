////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a30p3.c
//  Description   : Program to check whether 7th, 15th, 21st, and 28th bits are ON or OFF in a given number.
//  Input         : 134283264
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
    UINT iMask = 0x08004040; // 7th (0x40), 15th (0x4000), 21st (0x200000), 28th (0x10000000)
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
        printf("7th, 15th, 21st and 28th bits are ON\n");
    else
        printf("One or more bits among 7th, 15th, 21st and 28th are OFF\n");

    return 0;
}
