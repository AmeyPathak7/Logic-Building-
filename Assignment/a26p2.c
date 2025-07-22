////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : assignment26_2.c
//  Description   : Accept string and character. Return frequency of that character.
//  Input         : "Marvellous Multi OS", 'M'
//  Output        : 2
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountChar(arr, cValue);
    printf("%d\n", iRet);

    return 0;
}
