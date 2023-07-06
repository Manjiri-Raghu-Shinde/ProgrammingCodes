#include<stdio.h>

int DIvisibleBy5(int No){
    int iCount=0;
    if(No%5==0){
        iCount++;
    }

    return iCount;
}

int main(){
    int iValue1=0;
    int iRet=0;

    printf("enter number:\n");
    scanf("%d",&iValue1);

    iRet=DIvisibleBy5(iValue1);
    if(iRet==0){
        printf("the number is not divisible by 5\n");
    }else
    {
           printf("the number is divisible by 5\n");
        /* code */
    }
    
    return 0;
}