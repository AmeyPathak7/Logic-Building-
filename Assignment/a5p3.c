
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a4p5.c
//  Description   : Write a program which accepts number from user and print that number of times - to + on screen 
//  Input         : 4
//  Output        : -4 -3 -2 -1 0 1 2 3 4
//  Author        : Amey Pathak
//  Date          : 13-05-2025
//  Status        : Completed
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // updater 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo; iCnt <= 0; iCnt++)      
    {
        printf("%d\t",iCnt);
    }
       for(iCnt = 1; iCnt <= iNo; iCnt++)      
    {
        printf("%d\t",iCnt);
    }
   printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}