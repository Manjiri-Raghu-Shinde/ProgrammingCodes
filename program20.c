//demonstration of do-while loop
#include<stdio.h>

void Display()
{
    int iCnt = 0;
    iCnt = 1;
    do
    {
        printf("Jay GAnesh\n");
        iCnt++;
    } while (iCnt<=5);
    
}
int main()
{
    Display();

    return 0;
}