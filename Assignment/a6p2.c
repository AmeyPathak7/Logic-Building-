////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : digit_to_word.c
//  Description   : Accept a single digit number from user and print it in word format.
//                  If number is negative, its absolute value is considered.
//                  If number is not a single digit (e.g., >9 or <-9), print "Invalid Number".
//  Input         : 9
//  Output        : Nine
//                  -3 => Three
//                  12 => Invalid Number
//  Author        : Amey Pathak
//  Date          : 04-06-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void PrintWord(int iNo)
{
    // Handle negative digits
    if (iNo < 0)
        iNo = -iNo;

    if (iNo >= 0 && iNo <= 9)
    {
        switch (iNo)
        {
            case 0: printf("Zero\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            case 6: printf("Six\n"); break;
            case 7: printf("Seven\n"); break;
            case 8: printf("Eight\n"); break;
            case 9: printf("Nine\n"); break;
        }
    }
    else
    {
        printf("Invalid Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a single digit number: ");
    scanf("%d", &iValue);

    PrintWord(iValue);

    return 0;
}
