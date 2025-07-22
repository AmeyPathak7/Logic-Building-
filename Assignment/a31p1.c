////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a31p1.c
//  Description   : Program to OFF 7th bit (bit position 7, mask 0x00000040) of a given number if it is ON.
//  Input         : 79
//  Output        : 15
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;
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
