#include<stdio.h>
int strlenX(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
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
    
    printf("the string is :%s\n",sArr);
    iRet=strlenX(sArr);

    printf("number of characters are:%d\n",iRet);
    return 0;
}