#include<stdio.h>
#include<stdbool.h>
bool Difference(char *str)
{
    int iCnt=0;
    
    while(*str!='\0')
    {
        if((*str=='A')||(*str=='a')||(*str=='E')||(*str=='e')||(*str=='I')||(*str=='i')||(*str=='O')||(*str=='o')||(*str=='U')||(*str=='u'))
        {
            iCnt++;
        }
        str++;
    }
    if(iCnt==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
   
}
int main()
{
    char sArr[50];
    bool bRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    bRet=Difference(sArr);

    if(bRet==true)
    {
        printf("there is a vowel");
    }
    else
    {
         printf("there is no vowel");   
    }
    return 0;
}
