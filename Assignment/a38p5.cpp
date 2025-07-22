////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a38p5.cpp
//  Description   : Generic program to find minimum of N values using template
//  Input         : int arr[] = {10, 20, 30, 40, 50}
//  Output        : 10
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    cout << Min(arr, 5) << endl;   // 10
    cout << Min(brr, 4) << endl;   // 3.7

    return 0;
}
