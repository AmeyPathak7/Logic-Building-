///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name      : a9p5.c
//  Description    : Accept number from user and count frequency of digits less than 6
//  Input          : 2395
//  Output         : 3
//  Author         : Amey Pathak
//  Date           : 04-06-2025
//  Status         : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountBelowSix(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    while (iNo != 0) {
        iDigit = iNo % 10;
        if (iDigit < 6)
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

    iRet = CountBelowSix(iValue);
    printf("Frequency of digits less than 6 is: %d\n", iRet);
    return 0;
}
