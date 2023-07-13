#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int A=0,B=0,iScores=0,iMinScore=0;
	    scanf("%d %d",&A,&B);
	    
	    if(A>B){
	        iScores=A;
	    }else{
	        iScores=B;
	    }
	    
	    iMinScore=(7-iScores);
	    
	    printf("%d\n",(iMinScore));
	    t--;
	}
	return 0;
}

