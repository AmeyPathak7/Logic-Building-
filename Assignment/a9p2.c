///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name      : a9p2.c
//  Description    : Accept number from user and check whether it contains 0 in it or not
//  Input          : 1018
//  Output         : It Contains Zero
//  Author         : Amey Pathak
//  Date           : 04-06-2025
//  Status         : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckZero(int iNo)
{
    int iDigit = 0;
    int flag = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    while (iNo != 0) {
        iDigit = iNo % 10;
        if (iDigit == 0) {
            flag = 1;
            break;
        }
        iNo = iNo / 10;
    }

    if (flag == 1)
        printf("It Contains Zero\n");
    else
        printf("There is no Zero\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckZero(iValue);
    return 0;
}
