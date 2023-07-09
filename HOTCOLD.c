#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int T=0;
	    scanf("%d",&T);
	    
	    if(T>20){
	        printf("HOT\n");
	    }else{
	        printf("COLD\n");
	    }
	    t--;
	}
	return 0;
}

