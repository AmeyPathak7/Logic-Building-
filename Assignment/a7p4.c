////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a7p4.c
//  Description   : Write a program to find odd factorial of given number.
//                  (Multiply only odd numbers from 1 to N)
//  Input         : 5
//  Output        : 15   (5 * 3 * 1)
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
        iNo = -iNo;

    for (int i = 1; i <= iNo; i += 2)
    {
        iFact *= i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}
