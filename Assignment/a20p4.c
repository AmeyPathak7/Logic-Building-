////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a20p4.c
// Description : Display all elements from a given range
// Input : Start = 60, End = 90, Elements = 85 66 3 76 93 88
// Output : 66 76 85 88
// Author : Amey Pathak
// Date : 27-05-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd) {
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] >= iStart && Arr[i] <= iEnd) {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0;
}
