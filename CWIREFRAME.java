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
		
		for(int icnt=0;icnt<t;icnt++){
		    int N=sobj.nextInt();
		    int M=sobj.nextInt();
		    int X=sobj.nextInt();
		    
		    int Perimeter=2*N + 2*M;
		    
		    int TotalCost=Perimeter*X;
		    
		    System.out.println(TotalCost);
		}
	}
}
