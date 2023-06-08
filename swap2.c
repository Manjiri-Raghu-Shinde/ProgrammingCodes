// swap to numbers

void Swap(int iNo1,int iNo2){

    iNo2=iNo1+iNo2;
    iNo1=iNo2-iNo1;
    iNo2=iNo2-iNo1;

    printf("the swaped numbers are:%d %d\n",iNo1,iNo2);
}
#include<stdio.h>
int main(){
    int iValue1=0,iValue2=0;

    printf("Enter number one:\n");
    scanf("%d", &iValue1);

    printf("Enter number two:\n");
    scanf("%d", &iValue2);

    Swap(iValue1,iValue2);
    return 0;
}