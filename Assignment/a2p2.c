
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a2p2.c
//  Description   : Take one number from user and print * as many times as the number entered by user.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 1
#include <stdio.h>
void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}