#include<stdio.h>
int CountCh(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str=='a')
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
    
    iRet=CountCh(sArr);

    printf("number of occurances of 'a' are:%d\n",iRet);
    return 0;
}
