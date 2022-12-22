#include<stdio.h>

int add(int no1 , int no2)
{
    int returnvalue = 0;
    returnvalue = no1 + no2;
    return returnvalue;
}
int main()
{
    int value1 = 0;
    int value2 = 0;
    int ans = 0;

    printf("enter first no :\n");
    scanf("%d",&value1);
    printf("enter second no :\n");
    scanf("%d",&value2);


    ans = add(value1,value2);

    printf("the addition is :%d\n",ans);

    return 0;
}