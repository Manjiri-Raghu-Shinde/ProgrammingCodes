//Given a five digit integer, print the sum of its digits.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int iSum=0;
    int iDigit=0;
    int i=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=0;i<=5;i++){
        iDigit=n%10;
        iSum=iDigit+iSum;
        n=n/10;
    }
    
    printf("%d",iSum);
    return 0;
}