#include<stdio.h>

struct student
{
    int Rollno;
    char name[20];
    char city[20];
};

void DisplayRecords(struct student std[],int iRecords){
    int iCnt=0;
     printf("the records are:\n");

    for(iCnt=0;iCnt<iRecords;iCnt++){
        printf("Record %d\n",iRecords);

        printf("name:\n");
        printf("%s\n",std[iCnt].name);

        printf("rollno:\n");
        printf("%d\n",std[iCnt].Rollno);

        printf("city:\n");
        printf("%s\n",std[iCnt].city);

    }
}

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


    DisplayRecords(sData,iNo);


    return 0;
}