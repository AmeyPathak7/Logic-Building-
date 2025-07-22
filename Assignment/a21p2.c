////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : MinNumber.c
//  Description   : Accept N numbers from user and return the smallest number.
//  Input         : 6   Elements: 85 66 3 66 93 88
//  Output        : 3
//  Author        : Amey Pathak
//  Date          : 27-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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
        printf("Enter element %d: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);
    printf("Smallest Number is %d\n", iRet);

    free(p);
    return 0;
}
