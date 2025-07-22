////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : DigitSum.c
//  Description   : Accept N numbers and display summation of digits of each number.
//  Input         : 6   Elements: 8225 665 3 76 953 858
//  Output        : 17 17 3 13 17 21
//  Formula       : Extract digits using % and / operators, sum all
//  Author        : Amey Pathak
//  Date          : 27-05-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iTemp = 0, iSum = 0;

    printf("Sum of digits: ");
    for(int i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        iSum = 0;

        while(iTemp != 0)
        {
            iSum += iTemp % 10;
            iTemp /= 10;
        }
        printf("%d ", iSum);
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

    DigitsSum(p, iSize);

    free(p);
    return 0;
}
