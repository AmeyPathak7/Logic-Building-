////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a18p3.c
//  Description   : Display all elements which are even and divisible by 5.
//  Input         : 6 -> 85 66 3 80 93 88
//  Output        : 80
//  Author        : Amey Pathak
//  Date          : 26-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength) {
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
            printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main() {
    int iSize = 0, iCnt = 0;
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

    Display(p, iSize);

    free(p);
    return 0;
}
