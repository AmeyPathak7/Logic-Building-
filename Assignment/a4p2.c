
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p1.c
//  Description   : Write a program which accepts number from user and display its factors in decreasing order
//  Input         : 12
//  Output        : 6 4 3 2 1
//             
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);
    return 0;
}
