#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0;
	    
	    scanf("%d %d",&X,&Y);
	    
	    if((X+Y) % 2==0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	    
	    t--;
	}
	return 0;
}

