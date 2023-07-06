#include<stdio.h>
#include<stdbool.h>

int CountDigits(int iValue){

    int iDigit=0;
    int iCount=0;

    while(iValue!=0){
        iDigit=iValue%10;
        iCount++;
        iValue=iValue/10;
    }

    return iCount;
}

int RaisedTo(int iBase,int iExponential){
    int iCnt=0;
    int iRet=1;

    for(iCnt=0;iCnt<iExponential;iCnt++){
        iRet=iRet*iBase;
    }

    return iRet;
}

bool IsAmstrong(int iValue){
    int iCount=CountDigits(iValue);

    int iDigit=0;
    int iTemp=iValue;
    int iSum=0;

    while(iValue!=0){
        iDigit=iValue%10;
        iSum=RaisedTo(iDigit,iCount)+iSum;
        iValue=iValue/10;
    }

    if(iTemp==iSum){
        return true;
    }else{
        return false;
    }
}


int main(){

    int iValue=0;
    bool Bret=false;
    // int iRet=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Bret=IsAmstrong(iValue);
    if(Bret==true){
        printf("it is amstrong\n");
    }else 
    {
        printf("not an amstrong\n");
        /* code */
    }
    

    return 0;
}