#include <stdio.h>

int main(void) {
	// your code goes here
	int t=0;
	
	int i=0;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int following=0;
	    int follower=0;
	    scanf("%d %d",&following,&follower);
	    
	    if((follower*10)>=following){
	        printf("NO\n");
	    }else{
	        printf("YES\n");
	    }
	}
	return 0;
}

