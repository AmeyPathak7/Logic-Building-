////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment25_3.c
// Description : Toggle case of each character in the string.
// Input : "Marvellous Multi OS"
// Output : "mARVELLOUS mULTI os"
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified string is %s", arr);

    return 0;
}