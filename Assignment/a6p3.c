////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : factorial_expression.c
//  Description   : Write a program to find the factorial of a given number and display
//                  the result along with the factorial expression.
//  Input         : 5
//  Output        : 120
//                  (5*4*3*2*1)
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact *= iCnt;
    }

    return iFact;
}

void PrintFactorialExpression(int iNo)
{
    int iCnt;

    for (iCnt = iNo; iCnt > 1; iCnt--)
    {
        printf("%d*", iCnt);
    }
    printf("1\n");
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iResult = Factorial(iValue);
    printf("%d\n", iResult);

    PrintFactorialExpression(iValue);

    return 0;
}
