#include <stdio.h>

int main(void) {
	// your code goes here
	int A=0,B=0,X=0,Y=0;
	int iTotalMessi=0,iTotalRonaldo=0;
	scanf("%d %d %d %d",&A,&B,&X,&Y);
	
	iTotalMessi=(2*A)+(1*B);
	iTotalRonaldo=(2*X)+(1*Y);
	
	if(iTotalMessi>iTotalRonaldo){
	    printf("Messi\n");
	}else if(iTotalRonaldo==iTotalMessi){
	    printf("Equal\n");
	}else{
	    printf("Ronaldo\n");
	}
	
	return 0;
}

