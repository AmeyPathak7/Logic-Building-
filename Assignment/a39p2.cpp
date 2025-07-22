////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a39p2.cpp
//  Description   : Generic program to count frequency of specific value in array
//  Input         : arr={10,20,30,10,30,40,10,40,10}, iNo = 10
//  Output        : 4
//  Author        : Amey Pathak
//  Date          : 15/06/2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
int Frequency(T arr[], int iSize, T iNo)
{
    int iCnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
            iCnt++;
    }
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr, 9, 10);
    cout << iRet << endl;

    return 0;
}
