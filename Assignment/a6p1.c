
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   :  Write a program which accept number from user and if number is less than 50 then print small,
//                   if it is greater than 50 and less than 100 then print medium, 
//                   if it is greater than 100 then print large
//  Input         : 34
//  Output        : small
//                :  75
//                : medium
//                   150
//                : large
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if (iNo >= 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
