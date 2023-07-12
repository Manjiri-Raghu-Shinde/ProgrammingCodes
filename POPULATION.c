#include <stdio.h>

int main(void) {
	// your code goes herei
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,Y=0,Z=0;
	    int TotalPopulation=0;
	    scanf("%d %d %d",&X,&Y,&Z);
	    
	    TotalPopulation=(X-Y)+Z;
	    
	    printf("%d\n",(TotalPopulation));
	    
	    t--;
	}
	return 0;
}

