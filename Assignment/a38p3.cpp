////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a38p3.cpp
//  Description   : Generic program to add N values using template
//  Input         : int arr[] = {10, 20, 30, 40, 50}
//  Output        : 150
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    for(int i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    cout << AddN(arr, 5) << endl;   // 150
    cout << AddN(brr, 4) << endl;   // 32.2

    return 0;
}
