#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int A=0,B=0,C=0,iMax=0,iMin=0;
	    scanf("%d %d %d",&A,&B,&C);
	    
	   if(A>B && A>C){
	       iMax=A;
	   }else if(B>A && B>C){
	       iMax=B;
	   }else{
	       iMax=C;
	   }
	   
	    if(A<B && A<C){
	       iMin=A;
	   }else if(B<A && B<C){
	       iMin=B;
	   }else{
	       iMin=C;
	   }
	   
	   printf("%d\n",(iMax-iMin));
	    t--;
	}
	return 0;
}

