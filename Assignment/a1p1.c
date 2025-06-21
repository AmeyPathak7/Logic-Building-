////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a1p1.c
//  Description   : Program to perform safe division of two integers with division-by-zero check.
//  Author        : Amey Pathak
//  Date          : 07-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// code :
#include <stdio.h>

int Divide(int iNo1, int iNo2) {
    int iAns = 0;

    
    if (iNo2 == 0) {
        return -1; 
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main() {
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    
    if (iRet == -1) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Division is %d\n", iRet);
    }

    return 0;
}