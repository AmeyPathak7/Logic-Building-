////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a19q4.c
//  Description   : Count how many times 11 occurs in array.
//  Input         : 85 11 3 15 11 111
//  Output        : 2
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
            iCnt++;
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

    iRet = Frequency(p, iSize);
    printf("%d\n", iRet);

    free(p);
    return 0;
}
