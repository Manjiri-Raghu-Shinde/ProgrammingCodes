#include<stdio.h>
int FrequencySmall(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
            
        }
        str++;
    }
    
    return iCnt;
}
int main()
{
    char sArr[20];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    iRet=FrequencySmall(sArr);

    printf("frequency of small letters are:%d\n",iRet);
    return 0;
}
