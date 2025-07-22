////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a15p1.c
//  Description   : Display diagonal star pattern from top-left.
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol) {
    int i, j;
    for(i = 1; i <= iRow; i++) {
        for(j = 1; j <= iCol; j++) {
            if(j <= i)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
}

int main() {
    int iValue1, iValue2;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}