////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment25_2.c
// Description : Convert input string to uppercase.
// Input : "Marvellous Multi OS"
// Output : "MARVELLOUS MULTI OS"
// Author : Amey Pathak
// Date : 08-06-2025
// Status : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is %s", arr);

    return 0;
}