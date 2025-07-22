////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a39p1.cpp
//  Description   : Generic program to accept one value and number, print that value N times
//  Input         : 'M', 7 or 11, 3 or 3.7, 6
//  Output        : M M M M M M M  or  11 11 11  or  3.7 3.7 3.7 3.7 3.7 3.7
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}
