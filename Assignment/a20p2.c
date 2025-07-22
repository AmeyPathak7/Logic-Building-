////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a20p2.c
// Description : Return index of first occurrence of a number
// Input : 6 elements → 85 66 3 66 93 88, NO = 66
// Output : 1
// Author : Amey Pathak
// Date : 27-05-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo) {
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == iNo)
            return i;
    }
    return -1;
}

int main() {
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

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

    iRet = FirstOcc(p, iSize, iValue);
    printf("Index is: %d\n", iRet);

    free(p);
    return 0;
}
