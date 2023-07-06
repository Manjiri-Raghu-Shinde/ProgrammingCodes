#include<stdio.h>
#include<stdbool.h>

int Factorial(int iValue){

    int iCnt=0,iFact=1;

    for(iCnt=1;iCnt<=iValue;iCnt++){
        iFact=iFact*iCnt;
    }

    return iFact;

}

bool IsStrong(int iValue){

    int iDigit=0,iSum=0;
    int iTemp=iValue;

    while(iValue!=0){
        iDigit=iValue%10;
        iSum=iSum+Factorial(iDigit);
        iValue=iValue/10;
    }
    
    if(iSum==iTemp){
        return true;
    }else{
        return false;
    }
}

int main(){
    int iNo=0;
    bool bRet=false;

    printf("enter number:\n");
    scanf("%d",&iNo);

    bRet=IsStrong(iNo);

    if(bRet==true){
        printf("the no is strong\n");
    }else 
    {
        printf("is not strong\n");
        /* code */
    }
    
    return 0;
}