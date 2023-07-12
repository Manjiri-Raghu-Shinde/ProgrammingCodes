#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int N=0,K=0;
	    scanf("%d %d",&N,&K);
	    
	    if(K>N){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	    t--;
	}
	return 0;
}

