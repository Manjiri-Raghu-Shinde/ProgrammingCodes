#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch){

    if(ch>='A' && ch<='Z'){
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

    bRet=CheckCapital(ch);

    if(bRet==true){
        printf("the character is in capital case.\n");
    }else 
    {
        printf("the character is not in capital case.\n");
        /* code */
    }
    

    return 0;
}