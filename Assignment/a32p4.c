////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a32p4.c
//  Description   : Accept number and position, toggle the bit at given position.
//                  Formula: iNo ^ (1 << (iPos - 1))
//  Input         : 10 3
//  Output        : 14
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter bit position to toggle: ");
    scanf("%d", &iPos);

    iRet = ToggleBit(iValue, iPos);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
