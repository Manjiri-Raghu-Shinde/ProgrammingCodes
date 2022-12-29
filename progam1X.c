#include<stdio.h>

void NaturalNumberDisplay()
{
    for(int i = 1;i<11;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    printf("the first 10 natural nos are:\n");
    NaturalNumberDisplay();
    return 0;
}