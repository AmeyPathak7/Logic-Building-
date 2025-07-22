
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a16p5.c
//  Description   : Print decreasing left aligned number triangle
//  Input         : 4
//  Output        :
//                  1 2 3 4
//                    2 3 4
//                      3 4
//                        4
//  Author        : Amey Pathak
//  Date          : 19-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int s = 1; s < i; s++)
        {
            printf("  ");
        }
        for(int j = i; j <= iRow; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue;
    printf("Enter number of rows: ");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}
