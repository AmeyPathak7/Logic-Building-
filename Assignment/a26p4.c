////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : assignment26_4.c
//  Description   : Accept string and character. Return index of last occurrence of that character.
//  Input         : "Marvellous Multi OS", 'e'
//  Output        : 4
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0, iPos = -1;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            iPos = i;
        }
        i++;
    }

    return iPos;
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

    iRet = LastChar(arr, cValue);
    printf("Character last location is %d\n", iRet);

    return 0;
}
