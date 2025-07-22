////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a16p1.c
//  Description   : Print right-angled triangle pattern using '*'
//  Input         : 4
//  Output        :
//                  *
//                  * *
//                  * * *
//                  * * * *
//  Author        : Amey Pathak
//  Date          : 19-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
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