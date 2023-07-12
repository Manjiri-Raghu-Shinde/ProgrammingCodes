#include <stdio.h>

int main(void) {
	// your code goes here
	int A=0,B=0;
	int iMult=0,iSum=0,iAbsoluteDiff=0;
	scanf("%d %d",&A,&B);
	
	iMult=A*B;
	iSum=A+B;
	
	if(iSum>iMult){
	    iAbsoluteDiff=iSum-iMult;
	}else{
	    iAbsoluteDiff=iMult-iSum;
	}
	
	printf("%d\n",(iAbsoluteDiff));
	
	return 0;
}

