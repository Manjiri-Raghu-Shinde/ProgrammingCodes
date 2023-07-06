#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo){
   int iCnt=0,iSum=0;
    // bool bFlag=false;

   for(iCnt=1;iCnt<iNo;iCnt++){
        if((iNo%iCnt)==0){
            iSum=iSum+iCnt;
        }
   } 

    if(iSum==iCnt){
        return true;
    }else{
        return false;
    }
   
}
int main(){
    int iValue=0;
    bool bRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);

    if(bRet==true){
        printf("the number is perfect\n");
    }else
    {
        printf("the number is not perfect\n");
        /* code */
    }
    
    return 0;
}