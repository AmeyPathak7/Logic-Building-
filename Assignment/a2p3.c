
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a2p3.c
//  Description   : Accept one number form user and print 'hello' in the number is less then 10 else print 'Demo'.
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// code 
#include <stdio.h>
void Display(int iNo) {
    if (iNo < 10) {
        printf("Hello\n");
    } else {
        printf("Demo\n");
    }
}
int main() {
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}