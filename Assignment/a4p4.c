
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p4.c
//  Description   :     Write a program which accepts number from user and display sum of non-factors of that number
//  Input         : 12
//  Output        : 50
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
    int SumNonFact(int iNo) {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt < iNo; iCnt++) {
            if (iNo % iCnt != 0) {
                iSum += iCnt;
            }
        }

        return iSum;
    }
    int main() {
        int iValue = 0;
        int iRet = 0;

        printf("Enter number: ");
        scanf("%d", &iValue);

        iRet = SumNonFact(iValue);
        printf("%d\n", iRet);

        return 0;
    }