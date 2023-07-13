#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int N=0,X=0,K=0,TotalRuppesNeeded=0;
	    scanf("%d %d %d",&N,&X,&K);
	    
	    TotalRuppesNeeded=N*X;
	    
	    if(K>=TotalRuppesNeeded){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	    t--;
	}
	return 0;
}

