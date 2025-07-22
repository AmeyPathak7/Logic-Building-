////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a5p3.c
//  Description   : Write a program to find even factorial of given number.
//                  (Multiply only even numbers from 1 to N)
//  Input         : 10
//  Output        : 3840     (10 * 8 * 6 * 4 * 2)
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if (iNo < 0)
        iNo = -iNo;

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iResult = EvenFactorial(iValue);
    printf("%d\n", iResult);

    return 0;
}
