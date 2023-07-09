#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0,i=0;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int X=0,Y=0;
	    scanf("%d %d",&X,&Y);
	    
	    if((X+Y)>6){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

