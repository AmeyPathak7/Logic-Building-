////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : assignment26_5.c
//  Description   : Accept string from user and reverse it in place.
//  Input         : "abcd"
//  Output        : "dcba"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[30];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
