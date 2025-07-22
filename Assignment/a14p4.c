

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a14p4.c
//  Description   : Accept number of rows and columns and display alternating positive and negative numbers.
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    for(i = 1; i <= iRow; i++)
    {
        int sign = (i % 2 == 0) ? -1 : 1;
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", sign * j);
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
