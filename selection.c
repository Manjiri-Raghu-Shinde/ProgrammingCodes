#include<stdio.h>
#include<stdbool.h>//header file used to include boolean data type (which was added in c programming later)

bool CheckEven(int iValue)
{
    if((iValue % 2) == 0)//% operator is used to get reminder of the division
    {
        return true;
    }
    else
    {
        return false;
    }

}
//u cant display boolean data type and thus we dont have its format specifier

int main()
{
    int Ino = 0;
    bool bRet = false;

    printf("enter a number:\n");
    scanf("%d",&Ino);

    bRet = CheckEven(Ino);

    if(bRet == true)
    {
        printf("it is a even number...\n");    }
    else
    {
        printf("it is a odd number...\n");
    }

    return 0;
}