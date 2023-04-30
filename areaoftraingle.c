#include<stdio.h>
#include<math.h>
int AreaOfTriangle(int iNo1,int iNo2,int iNo3){
    int S=0;
    int iresult=0;
    S=(iNo1+iNo2+iNo3)/2;
    iresult=sqrt(S*(S-iNo1)*(S-iNo2)*(S-iNo3));
    return iresult;
}
int main(){
    int iSide1=0,iSide2=0,iSide3=0;
    int iArea=0;
    printf("Enter the length of three sides of traingles: \n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);
    iArea=AreaOfTriangle(iSide1,iSide2,iSide3);
    printf("The area of the traingle is:%d\n",iArea);
    return 0;
}