////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p1.c
//  Description   : Accept a number and count how many bits are ON (1) without using % or / operator.
//                  Use bitwise AND and right shift operator.
//  Input         : 11
//  Output        : 3
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        if(iNo & 1)
        {
            iCnt++;
        }
        iNo = iNo >> 1;
    }
    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);
    printf("Number of ON bits: %d\n", iRet);

    return 0;
}
