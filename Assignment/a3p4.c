////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a3p4.c
//  Description   : Accept one charecter from user and  convert of that charecter to upper case if it is lower case and vice versa.
//  Input         : 24
//  Output        : 2 4 6 8 12
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void ConvertCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        // Convert to uppercase
        printf("Uppercase: %c\n", ch - 32);
    } else if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase
        printf("Lowercase: %c\n", ch + 32);
    } else {
        printf("Invalid character. Please enter an alphabet.\n");
    }
}
int main() {
    char cValue = '\0';
    
    printf("Enter a character: ");
    scanf(" %c", &cValue); // Note the space before %c to consume any leading whitespace

    ConvertCase(cValue);

    return 0;
}