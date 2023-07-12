#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0;
	    scanf("%d %d",&X,&Y);
	    
	    if(Y>X){
	        printf("%d\n",(Y-X));
	    }else{
	          printf("%d\n",(0));
	    }
	    
	    t--;
	}
	return 0;
}

