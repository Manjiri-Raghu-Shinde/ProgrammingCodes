#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0,iTotalTabletsNeeded=0;
	    scanf("%d %d",&X,&Y);
	    
	    
	    iTotalTabletsNeeded=X*3;
	    
	    if(iTotalTabletsNeeded>Y){
	        printf("NO\n");
	    }else{
	        printf("YES\n");
	    }
	    t--;
	}
	return 0;
}

