#include<stdio.h>
float Circumference(float fNo)
{
    float Ret=0;
    Ret=3.14*fNo;
    return Ret;
}
float Area(float fNo){
    float Ret=0;
    Ret=3.14*fNo*fNo;
    return Ret;
}
int main(){
    float fRadius=0;
    float fCircum=0;
    float fArea=0;
    int iChoice=0;
    printf("What you want to calculate?\n");
    printf("1.Circumference\n");
    printf("2.Area\n");
    scanf("%d",&iChoice);
    printf("Enter the radius of the circle:\n");
    scanf("%f",&fRadius);

    switch(iChoice){
        case 1:
            fCircum=Circumference(fRadius);
            printf("the circumference of the circle is:%f\n",fCircum);
            break;

        case 2:
            fArea=Area(fRadius);
             printf("the area of the circle is:%f\n",fArea);
            break;
    }
    return 0;
}