#include<stdio.h>
#include<stdbool.h>
bool Check(char *str,char ch)
{
    int iCnt=0;
    bool bFlag=false;
    while(*str!='\0')
    {
        if((*str==ch))
        {
          bFlag=true;
          break;
        }
        str++;
    }
    
    return bFlag;
}
int main()
{
    char sArr[20];
  bool bRet=0;
    char cValue='\0';
    
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    printf("enter character\n");
    scanf(" %c",&cValue);

    bRet=Check(sArr,cValue);
    
    if(bRet==true)
    {
        printf("character is present in the string\n");
    }
    else
    {
        printf("character is not present in the string\n");
    }
    
    return 0;
}
