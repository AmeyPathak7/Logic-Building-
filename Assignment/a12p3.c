////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a12p3.c
//  Description   : Accept number of rows and columns from user and display reverse pattern:
//                  5 4 3 2 1
//                  5 4 3 2 1
//                  5 4 3 2 1
//  Input         : iRow = 3, iCol = 5
//  Output        : Repeated rows of decreasing numbers from 5 to 1
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}