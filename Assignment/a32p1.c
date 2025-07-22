////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a32p1.c
//  Description   : Accept number and position, check if bit at that position is ON.
//                  If ON return TRUE, else return FALSE.
//                  Formula: Mask = 1 << (position - 1)
//  Input         : 10 2
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

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);
    return (iNo & iMask) ? TRUE : FALSE;
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter bit position: ");
    scanf("%d", &iPos);

    bRet = ChkBit(iValue, iPos);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
