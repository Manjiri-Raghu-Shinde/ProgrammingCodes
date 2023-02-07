#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    if(iCnt!=0)
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
    char Arr[20];
    char ch='\0';
    bool bret=false;
    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);
    printf("enter the desired character:\n");
    scanf("%s",&ch);
    bret = ChkChar(Arr,ch);   // stelwrX(100);
    if(bret==true)
    {
         printf("the charcater is present\n");
    }
    else
    {
        printf("the charcater is not present\n");
    }
   
    return 0;
}