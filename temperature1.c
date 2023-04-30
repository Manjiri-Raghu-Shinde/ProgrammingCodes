#include<stdio.h>
float ConvertInCelsius(float fNo)
{
    float fRet=0;
    fRet=5.0/9.0*(fNo-32);
    return fRet;
}
int main(){
    float fValue=0;
    float fResult=0;
    printf("Enter temperature in Farenheit:\n");
    scanf("%f",&fValue);
    fResult=ConvertInCelsius(fValue);
    printf("The temperature in ceslius is:%f\n",fResult);
    return 0;
}