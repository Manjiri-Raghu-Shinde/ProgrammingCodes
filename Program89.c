#include<stdio.h>

int strlenX(char *str){
    int iCount=0;

    while(*str != '\0'){
        iCount++;
        str++;
    }

    return iCount;
}

int main(){

    char Arr[50];
    int iRet=0;

    printf("enter your sentence:\n");
    scanf("%[^'\n]s",Arr);

    iRet=strlenX(Arr);
    printf("the count is:%d\n",iRet);

    return 0;

}