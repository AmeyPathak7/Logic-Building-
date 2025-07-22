////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a14p1.c
//  Description   : Accept number of rows and columns and display:
//                  1 2 3 4
//                  5 6 7 8
//                  9 1 2 3
//                  4 5 6 7
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", num);
            num++;
            if(num > 9)
                num = 1;
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
