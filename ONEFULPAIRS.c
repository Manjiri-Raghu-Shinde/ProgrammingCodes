#include <stdio.h>

int main(void) {
	// your code goes here
	int a=0,b=0,iOneful=0;
	scanf("%d %d",&a,&b);
	
	iOneful=a+b+(a*b);
	
	if(iOneful==111){
	    printf("YES\n");
	}else{
	    printf("NO\n");
	}
	return 0;
}

