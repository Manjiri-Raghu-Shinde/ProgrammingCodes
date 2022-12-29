#include<stdio.h>
int FrequencyCapital(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCnt++;
            
        }
        str++;
    }
    
    return iCnt;
}
int main()
{
    char sArr[50];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    iRet=FrequencyCapital(sArr);

    printf("frequency of Capital letters are:%d\n",iRet);
    return 0;
}
