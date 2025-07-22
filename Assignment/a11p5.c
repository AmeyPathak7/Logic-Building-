////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p5.c
//  Description   : Accept number from user and display below pattern.
//                  Pattern: 2 4 6 8 10 12 14 16 (if input is 8)
//                  Formula: Even = 2 * index
//  Input         : 8
//  Output        : 2 4 6 8 10 12 14 16
//  Author        : Amey Pathak
//  Date          :19 / 06 / 2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", 2 * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
