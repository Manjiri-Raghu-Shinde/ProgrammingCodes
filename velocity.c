// The velocity of an object is given in km/hr. Write a C program to convert the given velocity
// from km/hr to m/sec

int VelocityConversion(int iNo){
    int iret=0;
    iret=(iNo*5)/18;
    return iret;
}
#include<stdio.h>
int main(){
    int iVelocity=0,iAns=0;
    printf("enter velocity:\n");
    scanf("%d",&iVelocity);

    iAns=VelocityConversion(iVelocity);

    printf("the converted velocity is:%d\n",iAns);
    return 0;
}