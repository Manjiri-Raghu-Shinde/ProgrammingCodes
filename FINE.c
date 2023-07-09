#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0;
	    scanf("%d",&X);
	    
	    if(X<=70){
	        printf("%d\n",(0));
	    }else if(X<=100){
	        printf("%d\n",(500));
	    }else{
	        printf("%d\n",(2000));
	    }
	    
	    t--;
	}
	return 0;
}

