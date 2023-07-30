/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj=new Scanner(System.in);
		
		int t=sobj.nextInt();
		
		for(int iCnt=0;iCnt<t;iCnt++){
		    int X=sobj.nextInt();
		    int Y=sobj.nextInt();
		    
		    if((X*3)>(Y*2)){
		        System.out.println(Y*2);
		    }else{
		        System.out.println(X*3);
		    }
		}
	}
}
