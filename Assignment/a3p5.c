////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name     : a3p5.c
//  Description   : Accept one character from user and check whether it is vowel or not.
//  Input         : A
//  Output        : True
//  Author        : Amey Pathak
//  Date          : 07-05-2025
//  Status        : Completed
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf(" %c", &cValue); // Note: space before %c to consume any leftover newline

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}
