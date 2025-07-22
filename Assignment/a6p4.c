////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a5p4.c
//  Description   : Write a program which accepts number from user and displays its table.
//  Input         : 5
//  Output        : 5 10 15 20 25 30 35 40 45 50
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    // Handle negative input
    if (iNo < 0)
        iNo = -iNo;

    for (iCnt = 1; iCnt <= 10; iCnt++)
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

    DisplayTable(iValue);

    return 0;
}
