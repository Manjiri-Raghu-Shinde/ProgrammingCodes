//input 4
//  1   2   3   4   *   *   *   *
#include<stdio.h>

void Display(int iNo)   //O(2N)
{
    int iCnt=0;
    char ch='A';

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
    printf("%c\t",ch);
    
    }


    
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("enter the value:\n");
    scanf("%d",&iValue);

    printf("the pattern is:\n");
    Display(iValue);
    return 0;
}