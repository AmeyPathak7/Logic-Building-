

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a10p2.c
//  Description   : Write a program which accepts number from user and returns the count of odd digits.
//  Input         : 2395
//  Output        : 3
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountOdd(int iNo) {
    int iCnt = 0, iDigit = 0;
    if (iNo < 0) {
        iNo = -iNo;
    }
    while (iNo > 0) {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0) {
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
    printf("%d", CountOdd(iValue));
    return 0;
}