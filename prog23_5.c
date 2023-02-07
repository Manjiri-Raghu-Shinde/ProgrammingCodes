#include<stdio.h>



void DisplaySchedule(char ch)
{
    if(ch=='A'||ch=='a')
    {
        printf("your exam is at 7am");

    }
    else if(ch=='B'||ch=='b')
    {
        printf("your exam is at 8:30am");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("your exam is at 9:20am");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("your exam is at 10:30am");
    }
    else
    {
        printf("invalid division");
    }
    
}
int main()
{
    char cValue='\0';
    

    printf("enter the character\n");
    scanf("%c",&cValue);

   DisplaySchedule(cValue);
    return 0;
}