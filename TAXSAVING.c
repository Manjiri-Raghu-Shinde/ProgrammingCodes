#include <stdio.h>

int main(void) {
	// your code goes hereint 
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0;
	    scanf("%d %d",&X,&Y);
	    
	    if(X>Y){
	        printf("%d\n",(X-Y));
	    }
	    
	    t--;
	}
	return 0;
}

