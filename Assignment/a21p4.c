////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : Display3Digit.c
//  Description   : Accept N numbers and display all numbers that contain exactly 3 digits.
//  Input         : 6   Elements: 8225 665 3 76 953 858
//  Output        : 665 953 858
//  Author        : Amey Pathak
//  Date          : 27-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    printf("3-digit numbers are: ");
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);
    return 0;
}
