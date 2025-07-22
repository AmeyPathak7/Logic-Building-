////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a8p1.c
//  Description   : Write a program which accepts radius of circle from user and calculates its area.
//                  (Area = PI * Radius * Radius)
//  Input         : 5.3
//  Output        : 88.2026
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is: %lf\n", dRet);

    return 0;
}
