
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a16p3.c
//  Description   : Print diagonal pattern with special characters
//  Input         : 5
//  Output        :
//                  $ * * * *
//                  # $ * * *
//                  # # $ * *
//                  # # # $ *
//                  # # # # $
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
            if(j < i)
                printf("# ");
            else if(j == i)
                printf("$ ");
            else
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a16p3.c
//  Description   : Print diagonal pattern with special characters
//  Input         : 5
//  Output        :
//                  $ * * * *
//                  # $ * * *
//                  # # $ * *
//                  # # # $ *
//                  # # # # $
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
            if(j < i)
                printf("# ");
            else if(j == i)
                printf("$ ");
            else
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