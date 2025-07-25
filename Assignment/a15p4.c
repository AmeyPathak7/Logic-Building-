
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : a15p4.c
//  Description   : Display square with @ center.
//  Author        : Amey Pathak
//  Date          : 19 / 06 / 2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol) {
    int i, j;
    for(i = 1; i <= iRow; i++) {
        for(j = 1; j <= iCol; j++) {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
                printf("* ");
            else
                printf("@ ");
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