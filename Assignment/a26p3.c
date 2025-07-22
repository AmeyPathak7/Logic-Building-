////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : assignment26_3.c
//  Description   : Accept string and character. Return index of first occurrence of that character.
//  Input         : "Marvellous Multi OS", 'e'
//  Output        : 4
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    getchar();
    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);
    printf("Character location is %d\n", iRet);

    return 0;
}
