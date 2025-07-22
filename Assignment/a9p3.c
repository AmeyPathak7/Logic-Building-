///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name      : a9p3.c
//  Description    : Accept number from user and count frequency of 2 in it
//  Input          : 2395
//  Output         : 1
//  Author         : Amey Pathak
//  Date           : 04-06-2025
//  Status         : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    while (iNo != 0) {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("Frequency of 2 is: %d\n", iRet);
    return 0;
}
