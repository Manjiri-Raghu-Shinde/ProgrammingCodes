#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	int i=0;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int X=0;
	    int Y=0;
	    scanf("%d %d",&X,&Y);
	    
	    if(X>Y){
	        printf("%d\n",(X-Y));
	    }else{
	        printf("%d\n",(Y-X));
	    }
	}
	
	return 0;
}

