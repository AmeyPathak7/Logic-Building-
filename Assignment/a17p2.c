////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a17p2.c
//  Description   : Display pattern using '*', '#' and '@' with right diagonal decreasing star and increasing '@'.
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
            if(j <= iCol - i)
                printf("* ");
            else
                printf("@ ");
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
