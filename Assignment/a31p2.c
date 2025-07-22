////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a31p2.c
//  Description   : Program to OFF 7th and 10th bits of a number (bit masks 0x00000040 and 0x00000200).
//  Input         : 577
//  Output        : 1
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240; // 7th and 10th bits
    return iNo & (~iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
