#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0;
	    scanf("%d",&X);
	    
	    if(X>=1 && X<4){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    t--;
	}
	return 0;
}

