#include<stdio.h>

int GCD(int iNo1,int iNo2){
    int iMax=0;
    int iGCD=0;
    int iCnt=0;


    if(iNo1>iNo2){
        iMax=iNo2;
    }else 
    {
        iMax=iNo1;
        /* code */
    }

    for(iCnt=1;iCnt<iMax;iCnt++){
        if(iNo1%iCnt==0 && iNo2%iCnt ==0){
            iGCD=iCnt;
        }
    }

    return iGCD;
    
}

int main(){

    int iValue1=0,iValue2=0,iRet=0;

    printf("enter number one:\n");
    scanf("%d",&iValue1);

    printf("enter number two:\n");
    scanf("%d",&iValue2);

    iRet=GCD(iValue1,iValue2);
    printf("the gcd is:%d\n",iRet);

    return 0;
}