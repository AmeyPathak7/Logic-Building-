
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a16p4.c
//  Description   : Print hollow diamond pattern within square using '*'
//  Input         : 6
//  Output        :
//                  * * * * * *
//                  * *       *
//                  *   *     *
//                  *     *   *
//                  *       * *
//                  * * * * * *
//  Author        : Amey Pathak
//  Date          : 19-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iRow; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iRow || i == j || j == (iRow - i + 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue;
    printf("Enter number of rows/columns: ");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}
