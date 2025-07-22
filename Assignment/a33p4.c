////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a33p4.c
//  Description   : Accept number and two positions, check whether any one bit is ON at given positions.
//  Input         : 10 3 7
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask = (1 << (iPos1 - 1)) | (1 << (iPos2 - 1));
    return (iNo & iMask) ? TRUE : FALSE;
}

int main()
{
    UINT iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter two positions: ");
    scanf("%d%d", &iPos1, &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
