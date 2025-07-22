////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a8p5.c
//  Description   : Write a program which accepts area in square feet and converts it into square meters.
//                  (1 square foot = 0.0929 square meter)
//  Input         : 5
//  Output        : 0.464515
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter: %lf\n", dRet);

    return 0;
}
