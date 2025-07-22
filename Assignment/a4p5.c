
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   :     Write a program which accepts number from user and display difference between sum of factors and non-factors of that number    
//  Input         : 12
//  Output        : -34
//                  (16 - 50 )
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDeff(int iNo) {
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++) {
        if (iNo % iCnt == 0) {
            iSumFact += iCnt;
        } else {
            iSumNonFact += iCnt;
        }
    }

    // Print result as per required format
    printf("%d\n", iNo);                           // Input
    printf("%d\n", iSumFact - iSumNonFact);       // Difference
    printf("( %d - %d )\n", iSumFact, iSumNonFact); // (factors - non-factors)

    return (iSumFact - iSumNonFact);
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDeff(iValue);

    return 0;
}
