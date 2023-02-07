#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Decimal Representation:%d\n",ch);
     printf("Octal Representation:%o\n",ch);
     printf("Hex Representation:%x\n",ch);

}
int main()
{
    char cValue='\0';
   
    printf("please enter one character\n");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}