

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a10p4.c
//  Description   : Write a program which accepts number from user and returns multiplication of all digits.
//  Input         : 2395
//  Output        : 270
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultiplyDigits(int iNo) {
    int iDigit = 0, iMult = 1;
    if (iNo < 0) {
        iNo = -iNo;
    }
    while (iNo > 0) {
        iDigit = iNo % 10;
        iMult *= iDigit;
        iNo /= 10;
    }
    return iMult;
}

int main() {
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    printf("%d", MultiplyDigits(iValue));
    return 0;
}
