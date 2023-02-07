#include<stdio.h>

void DisplayConvert(char c)
{
    int ascii=0;
    if('a'>=c && c<='z')
    {
       c=c+32;
       printf("%c",c);
    }
}
int main()
{
    char cValue='\0';
    printf("enter character : \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}