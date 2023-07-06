#include<stdio.h>

void toToggleX(char *str){
   char *start=str;
   char *end=str;
   char temp='\0';

   while(*end != '\0'){
    end++;
   }

   end--;

   while(start<end){
    temp=*start;
    *start=*end;
    *end=temp;

    start++;
    end--;
    
   }
}
int main(){
    char Arr[50];

    printf("enter sentence:\n");
    scanf("%[^'\n]s",Arr);

    toToggleX(Arr);

    printf("strinf:%s\n",Arr);

    return 0;
}