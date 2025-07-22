////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a19q1.c
//  Description   : Accept N numbers and return frequency of even numbers.
//  Input         : 85 66 3 80 93 88
//  Output        : 3
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
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

    iRet = CountEven(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}
