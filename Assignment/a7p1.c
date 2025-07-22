////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a5p1.c
//  Description   : Write a program to accept a number from user and print * that number of times followed by # same number of times.
//  Input         : 2
//  Output        : * * # #
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
        iNo = -iNo;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
