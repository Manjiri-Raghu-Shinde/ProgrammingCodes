#include<stdio.h>

struct student
{
    int Rollno;
    char name[20];
    char city[20];
};

int main(){

    int iCnt=0;
    int iNo=0;
    printf("enter number of records you want to enter:\n");
    scanf("%d",&iNo);

    struct student sData[iNo];

    printf("enter records:\n");

    for(iCnt=0;iCnt<iNo;iCnt++){
        printf("Record %d\n",iNo);

        printf("enter name:\n");
        scanf("%s",&sData[iCnt].name);

        printf("enter rollno:\n");
        scanf("%d",&sData[iCnt].Rollno);

        printf("enter city:\n");
        scanf("%s",&sData[iCnt].city);

    }

    printf("the records are:\n");

    for(iCnt=0;iCnt<iNo;iCnt++){
        printf("Record %d\n",iNo);

        printf("name:\n");
        printf("%s\n",sData[iCnt].name);

        printf("rollno:\n");
        printf("%d\n",sData[iCnt].Rollno);

        printf("city:\n");
        printf("%s\n",sData[iCnt].city);

    }


    return 0;
}