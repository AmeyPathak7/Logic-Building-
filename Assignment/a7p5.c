////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a7p5.c
//  Description   : Write a program to find difference between even factorial and odd factorial of given number.
//  Input         : 10
//  Output        : 2895   (3840 - 945)
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFact(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
        iNo = -iNo;

    for (int i = 2; i <= iNo; i += 2)
    {
        iFact *= i;
    }

    return iFact;
}

int OddFact(int iNo)
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
    int iValue = 0, iEven = 0, iOdd = 0, iDiff = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iEven = EvenFact(iValue);
    iOdd = OddFact(iValue);
    iDiff = iEven - iOdd;

    printf("%d\n", iDiff);
    printf("(%d - %d)\n", iEven, iOdd);

    return 0;
}
