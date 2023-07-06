#include <stdio.h>

int main(void) {
	// your code goes here
	int N=0;
	int DidntSubmit=0;
	int CouldntSolve=0;
	int Rating=0,CouldSolve=0;
	
	scanf("%d %d %d",&N,&DidntSubmit,&CouldntSolve);
	
    Rating=(N-DidntSubmit);
    
    CouldSolve=(Rating-CouldntSolve);
	
	printf("%d %d\n",Rating,CouldSolve);
	
	
	return 0;
}

