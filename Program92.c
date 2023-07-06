#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str<='Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    // printf("Please enter the character\n");
    // scanf(" %c",&cValue);

    iRet = CountCapital(Arr);

    printf("Frequency of letter : %d\n",iRet);

    return 0;
}