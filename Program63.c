#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch){

    if(ch>='0' && ch<='9'){
        return true;
    }else 
    {
        return false;
        /* code */
    }
    
}

int main(){

    char ch='\0';
    bool bRet=false;
    printf("enter desired character:\n");
    scanf("%c",&ch);

    bRet=CheckDigit(ch);

    if(bRet==true){
        printf("the character is digit.\n");
    }else 
    {
        printf("the character is not a digit.\n");
        /* code */
    }
    

    return 0;
}