
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a1p4.c
//  Description   : Take one number form user and check whether it is divisible by 5 or not.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo) {
    if (iNo % 5 == 0) {
        return TRUE; // Number is divisible by 5
    } else {
        return FALSE; // Number is not divisible by 5
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = check(iValue);
    
    if (bRet == TRUE) {
        printf("The number %d is divisible by 5.\n", iValue);
    } else {
        printf("The number %d is not divisible by 5.\n", iValue);
    }

    return 0;
}