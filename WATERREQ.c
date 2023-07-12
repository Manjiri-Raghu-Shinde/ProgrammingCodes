#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,TotalLitres=0;
	    scanf("%d",&X);
	    
	    TotalLitres=X*2;
	    
	    printf("%d\n",TotalLitres);
	    
	    t--;
	}
	return 0;
}

