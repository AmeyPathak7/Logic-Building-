////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a3p1.c
//  Description   : Write a program which accepts one number from user and prints even factors of that number
//  Input         : 24
//  Output        : 2 4 6 8 12
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void printEvenFactors(int iNo) {
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++) {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0)) {
            printf("%d ", iCnt);
        }
    }
}

int main() {
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    printEvenFactors(iValue);

    return 0;
}
