
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a1p3.c
//  Description   : print 5 to 1 number on screen 
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 1
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }        
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 2
/*
#include <stdio.h>

void Display()
{
    int iCnt = 0;
    int limit = 5;

    while (iCnt < limit)
    {
        printf("%d\n", iCnt);
        iCnt++;
    }
}

int main()
{
    Display();

    return 0;
}


*/