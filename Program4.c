#include<stdio.h>

int Addition(int No1,int No2){
        int iAns=0;
        iAns=No1+No2;
        return iAns;
}
int main(){
    int iValue1=0,iValue2=0;
    int iRet=0;
    printf("enter number 1:\n");
    scanf("%d",&iValue1);
    printf("enter number 2:\n");
    scanf("%d",&iValue2);
    
    iRet=Addition(iValue1,iValue2);
    printf("the addition is : %d\n",iRet);
    return 0;
}