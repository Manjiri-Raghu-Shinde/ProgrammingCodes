#include<stdio.h>
int CountFrequency(char *str,char ch)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str==ch))
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
    char cValue='\0';
    
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    printf("enter character to count\n");
    scanf(" %c",&cValue);

    iRet=CountFrequency(sArr,cValue);

    printf("frequency of Capital letters are:%d\n",iRet);
    
    return 0;
}
