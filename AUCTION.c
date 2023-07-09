#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int A=0,B=0,C=0;
	    scanf("%d %d %d",&A,&B,&C);
	    
	    if(A>B && A>C){
	        printf("Alice\n");
	    }else if(B>A && B>C){
	        printf("Bob\n");
	    }else{
	        printf("Charlie\n");
	    }
	    t--;
	}
	return 0;
}

