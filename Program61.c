#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch){

    if(ch>='a' && ch<='z'){
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

    bRet=CheckSmall(ch);

    if(bRet==true){
        printf("the character is in small case.\n");
    }else 
    {
        printf("the character is not in small case.\n");
        /* code */
    }
    

    return 0;
}