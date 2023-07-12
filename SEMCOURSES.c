#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0,Z=0,TotalChaps=0;
	    scanf("%d %d %d",&X,&Y,&Z);
	    
	    TotalChaps=X*Y*Z;
	    
	    printf("%d\n",(TotalChaps));
	    
	    t--;
	}
	return 0;
}

