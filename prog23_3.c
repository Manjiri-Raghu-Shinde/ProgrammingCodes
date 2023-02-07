#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    int iCnt=0;

    
        if(((ch>='0')&&(ch<='9')))
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

    bRet=ChkDigit(cValue);

    if(bRet==TRUE)
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("it is not a digit\n");
    }
    return 0;
}