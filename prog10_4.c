#include<stdio.h>

double FhtoCs(float fTemp)
{
    double Ctemp=0;
    Ctemp=((fTemp-32)*5)/9;
    return Ctemp;

}

int main()
{
    float iValue=0;
    double dRet=0;

    printf("enter temperature:\n");
    scanf("%f",&iValue);
    dRet=FhtoCs(iValue);
    printf("the celsius temp is:%lf\n",dRet);

    return 0;
}