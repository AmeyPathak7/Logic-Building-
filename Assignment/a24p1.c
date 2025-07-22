////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name     : CountCapital.c
//  Description   : Accept a string from the user and count the number of capital (A-Z) characters.
//  Input         : "Marvellous Multi OS"
//  Output        : 4
//  Author        : Amey Pathak
//  Date          : 08-06-2025
//  Status        : Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);
    printf("Number of capital characters: %d\n", iRet);

    return 0;
}
