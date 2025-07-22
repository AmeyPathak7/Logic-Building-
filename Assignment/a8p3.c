////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a8p3.c
//  Description   : Write a program which accepts distance in kilometres and converts it into meters.
//                  (1 kilometre = 1000 meters)
//  Input         : 5
//  Output        : 5000
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance (in KM): ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters: %d\n", iRet);

    return 0;
}
