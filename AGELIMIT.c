#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0,X=0,Y=0,A=0;
	scanf("%d",&t);
	
	while(t!=0){
	    scanf("%d %d %d",&X,&Y,&A);
	    
	    if((A>=X) && (A<Y)){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	    t--;
	}
	return 0;
}

