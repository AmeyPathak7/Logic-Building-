
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a5p2.c
//  Description   : Write a program to accept amount in US dollars and return its corresponding value in Indian currency.
//                  (Assume 1 USD = 70 INR)
//  Input         : 10
//  Output        : 700
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToRupees(int iDollar)
{
    return iDollar * 70;
}

int main()
{
    int iAmount = 0;
    int iResult = 0;

    printf("Enter amount in US Dollar: ");
    scanf("%d", &iAmount);

    iResult = DollarToRupees(iAmount);
    printf("%d\n", iResult);

    return 0;
}
