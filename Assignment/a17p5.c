////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a17p5.c
//  Description   : Display numeric hollow pattern in rectangle.
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
        for(j = 1; j <= iCol + 1; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol + 1 || i == j)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 4, iValue2 = 4;
    Pattern(iValue1, iValue2);
    return 0;
}
    