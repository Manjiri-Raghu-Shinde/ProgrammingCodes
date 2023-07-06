#include<stdio.h>

int ReverseNumberDisplay(int iNo){
    int iDigit=0,iRev=0;

    while(iNo!=0){
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;

    }

    return iRev;

}
int main(){

    int iValue=0,iRet=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=ReverseNumberDisplay(iValue);

    printf("the reverse number is:%d\n",iRet);
    return 0;
}