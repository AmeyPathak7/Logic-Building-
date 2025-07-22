////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : assignment26_1.c
//  Description   : Accept string and character from user. Check if character is present in the string.
//  Input         : "Marvellous Multi OS", 'e'
//  Output        : TRUE
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    getchar(); // to consume newline character
    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkChar(arr, cValue);

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
