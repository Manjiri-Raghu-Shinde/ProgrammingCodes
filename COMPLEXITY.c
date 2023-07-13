#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int A=0,B=0;
	    scanf("%d %d",&A,&B);
	    
	    if(A>B){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    t--;
	}
	return 0;
}

