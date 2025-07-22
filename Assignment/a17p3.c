////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a17p3.c
//  Description   : Display zigzag diagonal lines inside square box.
//  Author        : Amey Pathak
//  Date          : 19-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || j == iRow - i + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 6, iValue2 = 6;
    Pattern(iValue1, iValue2);
    return 0;
}
