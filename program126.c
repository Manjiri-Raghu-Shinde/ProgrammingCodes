#include<stdio.h>
int strlenX(char *str)
{
    int iCnt=0,i=0;

    while(str[i]!='\0')
    {
        iCnt++;
        i++;
    }
    
    return iCnt;
}
int main()
{
    char sArr[20];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    iRet=strlenX(sArr);

    printf("number of characters are:%d\n",iRet);
    return 0;
}
