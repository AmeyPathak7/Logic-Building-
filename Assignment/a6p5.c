
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a5p5.c
//  Description   : Write a program which accepts number from user and displays its table in reverse order.
//  Input         : 5
//  Output        : 50 45 40 35 30 25 20 15 10 5
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayTableReverse(int iNo)
{
    int iCnt = 0;

    // Handle negative input
    if (iNo < 0)
        iNo = -iNo;

    for (iCnt = 10; iCnt >= 1; iCnt--)
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

    DisplayTableReverse(iValue);

    return 0;
}
