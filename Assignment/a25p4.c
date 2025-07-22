////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment25_4.c
// Description : Display only digits from input string.
// Input : "marve89llous121"
// Output : "89121"
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}