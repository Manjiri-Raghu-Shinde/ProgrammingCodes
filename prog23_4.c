#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    int iCnt=0;

    
        if((ch>='a')&&(ch<='z'))
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

    bRet=ChkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("it is small character\n");
    }
    else
    {
        printf("it is not a small character\n");
    }
    return 0;
}