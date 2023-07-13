#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X1=0,Y1=0,X2=0,Y2=0;
	    int istyle1=0,istyle2=0;
	    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
	    
	    istyle1=X1+Y1;
	    istyle2=X2+Y2;
	    
	    if(istyle2>istyle1){
	        printf("%d\n",(istyle1));
	    }else{
	        printf("%d\n",(istyle2));
	    }
	    t--;
	}
	return 0;
}

