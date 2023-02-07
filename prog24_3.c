#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    char cCount='\0';
    if(ch>='A'&&ch<='Z')
    {
        for(cCount=ch;cCount<='Z';cCount++)
        {
            printf("%c\n",cCount);
        }
    }
    else if(ch>='a'&&ch<='z')
    {
        for(cCount=ch;cCount<='z';cCount++)
        {
            printf("%c\n",cCount);
        }
    }
    else
    {
        printf("invalid symbol");
    }
}
int main()
{
    char cValue='\0';
   
    printf("please enter one character\n");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}