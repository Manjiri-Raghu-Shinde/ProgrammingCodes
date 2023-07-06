#include<stdio.h>

int CountSpace(char *str){
    int iCount=0;

    while(*str != '\0'){
        if(*str == ' '){
         iCount++;   
        }
        str++;
    }

    return iCount;
}
int main(){
    char Arr[50];
    int iRet=0;

    printf("enter sentence:\n");
    scanf("%[^'\n]s",Arr);

    iRet=CountSpace(Arr);

    printf("Count:%d\n",iRet);

    return 0;
}