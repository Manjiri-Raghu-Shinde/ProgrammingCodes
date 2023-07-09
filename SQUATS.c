#include <stdio.h>


int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
    while(t>0){
        int iValue=0;
        scanf("%d",&iValue);
        
        printf("%d\n",(iValue*15));
        
        t--;
    }
	
	return 0;
}

