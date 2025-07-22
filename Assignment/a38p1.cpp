////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a38p1.cpp
//  Description   : Generic program to multiply two numbers using template function
//  Input         : 10, 20 or 10.0f, 20.0f
//  Output        : 200 or 200.000000
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    cout << iRet << endl;

    float fRet = Multiply(10.0f, 20.0f);
    cout << fRet << endl;

    return 0;
}
