////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a19q2.c
//  Description   : Return difference between frequency of even and odd numbers.
//  Input         : 85 66 3 80 93 88 90
//  Output        : 1
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, evenCnt = 0, oddCnt = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
    }
    return evenCnt - oddCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

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

    iRet = Frequency(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}
// This code accepts an array of integers from the user and calculates the difference between the frequency of even and odd numbers.