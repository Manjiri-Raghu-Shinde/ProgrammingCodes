//demonstration of for loop

#include<stdio.h>

void Display()
{
    //used register keyword to increase the speed of performance
    // by storing variable iCnt in CPU Registers
    
    register int iCnt = 0; 

    //we can do this step inside the loop also 
    //like for(int iCnt = 1;iCnt<=5;iCnt++)

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("jay ganesh \n");
    }
}

int main()
{
    Display();
    return 0;
}

/*
1:Write the common statement in the loop block
2.Check wwhether the number of iterations are already known or not
3.If the iterations count is fixed then go for for loop
4.If iteration count is not fixed then go for while
*/