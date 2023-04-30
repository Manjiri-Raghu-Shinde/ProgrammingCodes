#include<stdio.h>
int main(){
    float fValue=0;
    float fResult=0;
    printf("enter temperature in farenheit:\n");
    scanf("%f",&fValue);
    fResult=5.0/9.0*(fValue-32);
    printf("The temperature in celsius is:%f\n",fResult);

    return 0;
}