#include <stdio.h>

int main(void) {
	// your code goes here
	int X=0,A=0,B=0,TotalPrice=0;
	scanf("%d",&X);
	
	scanf("%d %d",&A,&B);
	
	TotalPrice=A+B;
	
	if(TotalPrice<=X){
	    printf("YES\n");
	}else{
	    printf("NO\n");
	}
	
	return 0;
}

