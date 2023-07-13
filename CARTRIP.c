#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,iTotalFair=0;
	    scanf("%d",&X);
	    
	    if(X>300){
	        iTotalFair=X*10;
	    }else{
	        iTotalFair=300*10;
	    }
	    
	    printf("%d\n",iTotalFair);
	    
	    t--;
	}
	return 0;
}

