////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p5.c
//  Description   : Accept number and range, toggle all bits from start to end positions.
//  Input         : 897 9 13
//  Output        : Modified number with toggled bits in range
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        iMask |= (1 << (i - 1));
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter start and end positions: ");
    scanf("%d%d", &iStart, &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
