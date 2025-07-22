////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p2.c
//  Description   : Accept number from user and display below pattern.
//                  Pattern: 5 # 4 # 3 # 2 # 1 # (if input is 5)
//  Input         : 5
//  Output        : 5 # 4 # 3 # 2 # 1 #
//  Author        : Amey Pathak
//  Date          :19 / 06 / 2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayNumberPattern(int iNo)
{
    int i = 0;

    for (i = iNo; i >= 1; i--)
    {
        printf("%d # ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayNumberPattern(iValue);

    return 0;
}
