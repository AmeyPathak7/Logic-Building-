////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a31p5.c
//  Description   : Program to turn ON first 4 bits of a number (bit positions 1 to 4, mask 0x0000000F).
//  Input         : 73
//  Output        : 79
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
    return iNo | iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = OnBit(iValue);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
