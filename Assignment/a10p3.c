
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a10p3.c
//  Description   : Write a program which accepts number from user and returns count of digits between 3 and 7.
//  Input         : 2395
//  Output        : 1
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRangeDigits(int iNo) {
    int iDigit = 0, iCnt = 0;
    if (iNo < 0) {
        iNo = -iNo;
    }
    while (iNo > 0) {
        iDigit = iNo % 10;
        if (iDigit > 2 && iDigit < 8) {
            iCnt++;
        }
        iNo /= 10;
    }
    return iCnt;
}

int main() {
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    printf("%d", CountRangeDigits(iValue));
    return 0;
}