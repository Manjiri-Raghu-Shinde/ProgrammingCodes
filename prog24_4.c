#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    int iCnt=0;

    
        if(((ch>='0')&&(ch<='9'))||((ch>='a')&&(ch<='z'))||((ch<='A')&&(ch>='Z')))
        {
            iCnt++;
            
        }
        
    
    return iCnt;
}
int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("it is not a special symbol\n");
    }
    else
    {
        printf("it is a special symbol\n");
    }
    return 0;
}