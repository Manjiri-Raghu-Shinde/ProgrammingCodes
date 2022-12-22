#include<stdio.h>

void swap (int p , int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;


}
int main()
{
    int value1,value2 = 0;

    printf("enter first no:\n");
    scanf("%d",&value1);
    printf("enter second no:\n");
    scanf("%d",&value2);

    swap(value1 ,value2);

    printf("after swapping the nos are:\n");
    printf("%d\n",value1);
    printf("%d\n",value2);



    return 0;
}