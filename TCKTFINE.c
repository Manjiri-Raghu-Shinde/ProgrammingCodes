#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	
	while(t>0){
	    int X=0,P=0,Q=0,iFinePass=0,iTotalFee=0;
	    scanf("%d %d %d",&X,&P,&Q);
	    
	    if(P>Q){
	        iFinePass=P-Q;
	    }else if(P==Q){
	        iFinePass=P-Q;
	    }else{
	        iFinePass=Q-P;
	    }
	    
	    iTotalFee=iFinePass*X;
	    
	    printf("%d\n",(iTotalFee));
	    
	    t--;
	}
	return 0;
}

