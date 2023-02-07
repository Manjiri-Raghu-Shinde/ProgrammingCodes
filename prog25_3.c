#include<stdio.h>
int Difference(char *str)
{
    int CiCnt=0;
    int SiCnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            CiCnt++;
            
        }
        str++;
        if((*str>='a')&&(*str<='z'))
        {
            SiCnt++;
            
        }
        str++;
    }
    
    return SiCnt-CiCnt;
}
int main()
{
    char sArr[50];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",sArr);
    
    iRet=Difference(sArr);

    printf("difference between small letters and capital letters are:%d\n",iRet);
    return 0;
}
