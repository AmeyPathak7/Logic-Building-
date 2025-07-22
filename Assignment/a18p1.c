////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a18p1.c
//  Description   : Accept N numbers and return the difference between the summation of even and odd elements.
//                  Formula: Difference = Sum(Even Elements) - Sum(Odd Elements)
//  Input         : 6  -> 85 66 3 80 93 88
//  Output        : 53 (234 - 181)
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength) {
    int i = 0, iEven = 0, iOdd = 0;
    for(i = 0; i < iLength; i++) {
        if(Arr[i] % 2 == 0)
            iEven += Arr[i];
        else
            iOdd += Arr[i];
    }
    return iEven - iOdd;
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));
    if(p == NULL) {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}
