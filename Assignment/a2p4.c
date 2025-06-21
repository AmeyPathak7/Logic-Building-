
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a2p4.c
//  Description   : accept two number form user and display firent number in second number of times.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 
#include <stdio.h>
void Display(int iNo1, int iNo2) {
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo2; iCnt++) {
        printf("%d\n", iNo1);
    }
}   
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number: ");
    scanf("%d", &iValue1);
    printf("Enter frequency: ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}