////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment25_1.c
// Description : Convert input string to lowercase.
// Input : "Marvellous Multi OS"
// Output : "marvellous multi os"
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
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

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}
