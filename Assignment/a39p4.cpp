////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a39p4.cpp
//  Description   : Generic program to search last occurrence of a value in array
//  Input         : arr={10,20,30,10,30,40,10,40,10}, iNo=40
//  Output        : 7
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T arr[], int iSize, T iNo)
{
    for(int i = iSize - 1; i >= 0; i--)
    {
        if(arr[i] == iNo)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr, 9, 40);
    cout << iRet << endl;

    return 0;
}
