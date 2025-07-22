////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p1.c
//  Description   : Accept number from user and display below pattern.
//                  Pattern: A B C D E (if input is 5)
//  Input         : 5
//  Output        : A B C D E
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayCharPattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for (i = 1; i <= iNo; i++, ch++)
    {
        printf("%c ", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayCharPattern(iValue);

    return 0;
}
