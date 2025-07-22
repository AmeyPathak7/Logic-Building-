////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p3.c
//  Description   : Accept number from user and display below pattern.
//                  Pattern: 1 2 3 4 5 (if input is 5)
//  Input         : 5
//  Output        : 1 2 3 4 5
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", i);
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
