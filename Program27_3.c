#include<stdio.h>

int FirstOcc(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        if(*str == ch)
        {
            break;
        }
        
        str++;
    }
    return iCnt+1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf("%s",&cValue);

    iRet = FirstOcc(Arr,cValue);

    printf("First Occurence of letter : %d\n",iRet);

    return 0;
}