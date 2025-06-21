
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a3p1.c
//  Description   : Write a program which accepts one number from user and print that even number even number on screen
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code
#include <stdio.h>
void printEven(int iNo) {
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        if (iCnt % 2 == 0) { // Check if the number is even
            printf("%d\n", iCnt);
        }
    }
}
int main() {
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}