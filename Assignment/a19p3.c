////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a19q3.c
//  Description   : Check whether 11 is present in array or not.
//  Input         : 85 66 11 80 93 88
//  Output        : 11 is present
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
            return TRUE;
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize);
    if(bRet == TRUE)
        printf("11 is present\n");
    else
        printf("11 is absent\n");

    free(p);
    return 0;
}
