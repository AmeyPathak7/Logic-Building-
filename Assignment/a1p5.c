
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a1p5.c
//  Description   : Take one number form user and print * as many times as the number entered by user.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 1
/*  code as per sir given in the assignment 


#include <stdio.h>
void Accept(int iNo) {
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
    */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 2
// code as per question requirement

#include <stdio.h>
void Accept(int iNo) {
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number of times to print *: ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////