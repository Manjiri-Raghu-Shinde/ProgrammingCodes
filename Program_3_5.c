#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char c)
{
    int iCnt=0;
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I'|| c=='o'||c=='O'||c=='u'||c=='U')
    {
        iCnt++;
    }
    
    if(iCnt==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("enter character : \n");
    scanf("%c",&cValue);
    bRet=CheckVowel(cValue);
    if(bRet==true)
    {
        printf("%c is a vowel\n",cValue);
    }
    else
    {
        printf("%c is not a vowel\n",cValue);
    }
    return 0;
}