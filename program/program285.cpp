#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;
    
    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    
    iResult = iNo & (iMask1 & iMask2);

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = OffBitMultiple(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}