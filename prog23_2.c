#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    int iCnt=0;

    
        if(((ch>='A')&&(ch<='Z')))
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

    bRet=ChkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("it is capital character\n");
    }
    else
    {
        printf("it is not a capital character\n");
    }
    return 0;
}