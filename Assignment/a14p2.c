
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a14p2.c
//  Description   : Accept number of rows and columns and display alternating even and odd number rows.
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
        int num = (i % 2 == 1) ? 2 : 1;
        for(j = 1; j <= iCol; j++, num += 2)
        {
            printf("%d ", num);
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
