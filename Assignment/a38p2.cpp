////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a38p2.cpp
//  Description   : Generic program to find maximum of three numbers using template
//  Input         : 10, 20, 30
//  Output        : 30
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    T max = no1;
    if(no2 > max)
        max = no2;
    if(no3 > max)
        max = no3;
    return max;
}

int main()
{
    cout << Max(10, 20, 30) << endl;       // 30
    cout << Max(5.5f, 8.2f, 3.3f) << endl;  // 8.2

    return 0;
}
