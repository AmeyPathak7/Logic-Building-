
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   : Write a program which accepts N from user and print first 5 multiples of that number.
//  Input         : 4
//  Output        : 4 8 12 16 20
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    printf("%d\n", iNo);

    // Print the next 4 multiples
    for (iCnt = 2; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
