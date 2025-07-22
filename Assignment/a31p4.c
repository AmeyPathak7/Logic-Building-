////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a31p4.c
//  Description   : Program to toggle 7th and 10th bits of a number (bit masks 0x00000040 and 0x00000200).
//  Input         : 137
//  Output        : 713
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000240;
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
