///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : a20p5.c
// Description : Return product of all odd elements
// Input : 15 66 3 70 10 88
// Output : 45
// Author : Amey Pathak
// Date : 27-05-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength) {
    int iProduct = 1;
    int bOddFound = 0;

    for(int i = 0; i < iLength; i++) {
        if(Arr[i] % 2 != 0) {
            iProduct *= Arr[i];
            bOddFound = 1;
        }
    }

    if(bOddFound == 0)
        return 0;
    else
        return iProduct;
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

    iRet = Product(p, iSize);
    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}
