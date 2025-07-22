////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a8p4.c
//  Description   : Write a program which accepts temperature in Fahrenheit and converts it into Celsius.
//                  (Celsius = (Fahrenheit - 32) * 5 / 9)
//  Input         : 34
//  Output        : 1.111111
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5.0 / 9.0;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.6lf\n", dRet);

    return 0;
}
