#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}