#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0;
	    scanf("%d",&X);
	    
	    if(X<3){
	        printf("LIGHT\n");
	    }else if(X<7){
	        printf("MODERATE\n");
	    }else{
	        printf("HEAVY\n");
	    }
	    t--;
	}
	return 0;
}

