#include<stdio.h>
int SimpleInterest(int iPrinciple,int iRoi,int iTime)
{
    int iResult = 0;
    iResult=(iPrinciple*iRoi*iTime)/100;
    return iResult;
}
int MaturityAmount(int iPrinciple,int iInterest)
{
    int iResult = 0;
    iResult=(iPrinciple*iInterest);
    return iResult;
}
int main(){
    int iPrinciple=0,iRoi=0,iTime=0;
    int iSimpleinterest=0;
    int iMaturityamount=0;
    int iChoice=0;
    printf("Enter your choice:\n");
    printf("1.Simple Interest.\n");
    printf("2.Maturity Amount\n");
    scanf("%d",&iChoice);
    printf("Enter the principle in Rs:\n");
    scanf("%d",&iPrinciple);
    printf("Enter the rate of interest in %: \n");
    scanf("%d",&iRoi);
    printf("Enter the time period in months:\n");
    scanf("%d",&iTime);
    
    switch(iChoice){
        case 1:
            iSimpleinterest=SimpleInterest(iPrinciple,iRoi,iTime);
            printf("the simple interest is :%d\n",iSimpleinterest);
            break;

        case 2:
            iMaturityamount=(iPrinciple,iSimpleinterest);
            printf("the maturity amount is:%d\n",iMaturityamount);
            break;
    }
    return 0;
}