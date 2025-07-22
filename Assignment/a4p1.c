
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p1.c
//  Description   : wrte a program which accepts number from user and display its multiplication of factors
//  Input         : 12
//  Output        : 144
//                  ( 1 * 2 * 3 * 4 * 6 )
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    int first = 1;

    
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }

    
    printf("%d\n", iMult);

    
    printf("(");
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            if (first)
            {
                printf(" %d", iCnt);
                first = 0;
            }
            else
            {
                printf(" * %d", iCnt);
            }
        }
    }
    printf(" )\n");

    return iMult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);


    return 0;
}