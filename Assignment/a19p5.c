////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a19q5.c
//  Description   : Return frequency of given number from array.
//  Input         : NO = 11; Elements: 85 11 3 15 11 111
//  Output        : 2
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
            iCnt++;
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number to check frequency: ");
    scanf("%d", &iValue);

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);
    printf("Frequency of %d is %d\n", iValue, iRet);

    free(p);
    return 0;
}
