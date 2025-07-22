////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a38p4.cpp
//  Description   : Generic program to find maximum of N values using template
//  Input         : int arr[] = {10, 20, 30, 40, 50}
//  Output        : 50
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T max = arr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    cout << Max(arr, 5) << endl;  // 50
    cout << Max(brr, 4) << endl;  // 10.0

    return 0;
}
