
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a10p5.c
//  Description   : Write a program which accepts number from user and returns difference between summation of even digits and odd digits.
//  Input         : 2395
//  Output        : -15
//  Author        : Amey Pathak
//  Date          : 13-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DiffEvenOddDigits(int iNo) {
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;
    if (iNo < 0) {
        iNo = -iNo;
    }
    while (iNo > 0) {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0) {
            iEvenSum += iDigit;
        } else {
            iOddSum += iDigit;
        }
        iNo /= 10;
    }
    return (iEvenSum - iOddSum);
}

int main() {
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    printf("%d", DiffEvenOddDigits(iValue));
    return 0;
}
