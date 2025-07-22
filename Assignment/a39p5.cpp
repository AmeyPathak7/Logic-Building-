////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a39p5.cpp
//  Description   : Generic program to reverse array contents
//  Input         : arr={10,20,30,10,30,40,10,40,10}
//  Output        : 10 40 10 40 30 10 30 20 10
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Reverse(T arr[], int iSize)
{
    int start = 0, end = iSize - 1;
    while(start < end)
    {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout << "Original: ";
    for(int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    cout << endl;

    Reverse(arr, 9);

    cout << "Reversed: ";
    for(int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
