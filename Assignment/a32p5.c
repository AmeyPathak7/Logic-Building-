////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p5.c
//  Description   : Accept a number from user and toggle the contents of first and last nibble (4 bits each).
//                  First nibble = bits 1–4, Last nibble = bits 29–32.
//  Input         : 897
//  Output        : Modified number after toggling 1st and last nibble
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;  // Last nibble: 0xF0000000, First nibble: 0x0000000F
    return iNo ^ iMask;       // XOR toggles bits
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
