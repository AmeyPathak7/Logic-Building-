////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p4.c
//  Description   : Accept number from user and display below pattern.
//                  Pattern: # 1 # 2 # 3 # 4 *
//  Input         : 4
//  Output        : # 1 # 2 # 3 # 4 *
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
        printf("# %d ", i);
    }
    printf("*");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
