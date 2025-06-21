
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a2p1.c
//  Description   : Take one number from user and check whether it is even or odd.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEvenOdd(int iNo) {
    if (iNo % 2 == 0) {
        return TRUE; // Number is even
    } else {
        return FALSE; // Number is odd
    }
}
int main() {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);
    
    if (bRet == TRUE) {
        printf("The number %d is even.\n", iValue);
    } else {
        printf("The number %d is odd.\n", iValue);
    }

    return 0;
}