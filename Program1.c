#include<stdio.h>


int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("enter first number:\n");
    scanf("%d", &iNo1);
    printf("enter second number:\n");
    scanf("%d", &iNo2);

    printf("First NUmber is :%d\n",iNo1);
    printf("Second NUmber is :%d\n",iNo2); 

    iMult = iNo1*iNo2;

    printf("multiplication is : %d\n",iMult);


    return 0;
}