#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int G=0,B=0;
	    scanf("%d %d",&G,&B);
	    
	    printf("%d\n",(B-G));
	    t--;
	}
	return 0;
}

