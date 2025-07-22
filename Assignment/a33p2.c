////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p2.c
//  Description   : Accept two numbers and print positions where both numbers have ON (1) bits.
//  Input         : 10 15
//  Output        : 2 4
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 1;
    int iPos = 1;

    UINT iAnd = iNo1 & iNo2;

    printf("Common ON bit positions are: ");
    while(iAnd != 0)
    {
        if(iAnd & 1)
        {
            printf("%d ", iPos);
        }
        iAnd = iAnd >> 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%u", &iValue1);

    printf("Enter second number: ");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}
