
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   : Write a program which accepts number from user and print that number of times  
//  Input         : 4
//  Output        : 1 2 3 4
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayNumbers(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayNumbers(iValue);

    return 0;
}
