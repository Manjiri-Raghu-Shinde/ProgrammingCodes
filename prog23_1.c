#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    int iCnt=0;

    
        if(((ch>='A')&&(ch<='Z'))||(ch>='a')&&(ch<='z'))
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

    bRet=ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("it is character\n");
    }
    else
    {
        printf("it is not a character\n");
    }
    return 0;
}