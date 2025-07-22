
////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a13p2.c
//  Description   : Accept number of rows and columns and display alternate uppercase and lowercase alphabet rows.
//  Author        : Amey Pathak
//  Date          :19 / 06 / 2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        char ch = (i % 2 == 1) ? 'A' : 'a';
        for(j = 1; j <= iCol; j++, ch++)
        {
            printf("%c ", ch);
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