////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a8p2.c
//  Description   : Write a program which accepts width and height of rectangle from user and calculates its area.
//                  (Area = Width * Height)
//  Input         : 5.3  9.78
//  Output        : 51.834
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fW = 0.0, fH = 0.0;
    double dArea = 0.0;

    printf("Enter width and height: ");
    scanf("%f %f", &fW, &fH);

    dArea = RectArea(fW, fH);

    printf("Area of Rectangle is: %lf\n", dArea);

    return 0;
}