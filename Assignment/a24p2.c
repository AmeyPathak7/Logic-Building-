////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : CountSmall.c
//  Description   : Accept a string from the user and count the number of small (a-z) characters.
//  Input         : "Marvellous"
//  Output        : 9
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);
    printf("Number of small characters: %d\n", iRet);

    return 0;
}
