
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   : Write a program which accepts number from user and print that nnumber of times '$ * ' on screen  
//  Input         : 4
//  Output        : $ * $ * $ * $ *
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return 0;
}
