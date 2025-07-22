
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a11p6d.c
//  Description   : Accept number of rows and columns from user and display pattern:
//                  Rows of repeated digits
//  Input         : iRow = 4, iCol = 3
//  Output        : 1 1 1
//                  2 2 2
//                  3 3 3
//                  4 4 4
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
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", i);
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
