///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name      : a9p4.c
//  Description    : Accept number from user and count frequency of 4 in it
//  Input          : 9440
//  Output         : 2
//  Author         : Amey Pathak
//  Date           : 04-06-2025
//  Status         : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    while (iNo != 0) {
        iDigit = iNo % 10;
        if (iDigit == 4)
            iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("Frequency of 4 is: %d\n", iRet);
    return 0;
}
    