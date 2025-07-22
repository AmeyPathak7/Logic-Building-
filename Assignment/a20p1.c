////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a20p1.c
// Description : Check whether a number is present in the array
// Input : 6 elements → 85 66 3 66 93 88, NO = 66
// Output : TRUE
// Author : Amey Pathak
// Date : 27-05-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo) {
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == iNo)
            return TRUE;
    }
    return FALSE;
}

int main() {
    int iSize = 0, iValue = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    free(p);
    return 0;
}
