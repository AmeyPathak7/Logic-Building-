////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : ReverseString.c
//  Description   : Accept a string from user and display it in reverse order.
//  Input         : "Marvellous"
//  Output        : "suollevraM"
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        iStart++;
        iEnd--;
    }

    printf("Reversed string: %s\n", str);
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}
