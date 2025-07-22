////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a32p2.c
//  Description   : Accept number and position, OFF the bit at that position if ON.
//                  Formula: iNo & ~(1 << (iPos - 1))
//  Input         : 10 2
//  Output        : 8
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    return iNo & (~iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter bit position to OFF: ");
    scanf("%d", &iPos);

    iRet = OffBit(iValue, iPos);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
