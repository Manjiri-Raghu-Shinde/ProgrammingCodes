#include<stdio.h>
//printf and scanf functions are given by this preprocessor statement

int Multiplication(int iNo1 , int iNo2)
{
    int iRet = 0;
    iRet = iNo1 * iNo2;
    return iRet;
}


int main()
{
    //static input acceptance (beforehand input acceptance)
    int iValue1 = 0 ,  iValue2 = 0;
    int iAns;


    printf("enter first number:\n");
    scanf("%d",&iValue1);//dynamic input acceptance ( runtime input acceptance)

    printf("enter second number:\n");
    scanf("%d",&iValue2);

    iAns = Multiplication(iValue1,iValue2);

    printf("Addition is:%d\n",iAns);


    return 0;
}