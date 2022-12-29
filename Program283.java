import java.util.Scanner;

class Pattern
{
	public void Display(int iNo)
	{
        int iDigit=0;
        
                while(iNo!=0)
                {
                    iDigit=iNo%10;
                    System.out.print(iDigit+"\t");
                    iNo=iNo/10;
                }
                
          	}
}
class Program283
{
	public static void main (String arr[])
	{
		Scanner sobj=new Scanner(System.in);
		Pattern pobj=new Pattern();
		System.out.println("enter desired number :");
		int iNo= sobj.nextInt();
		
		pobj.Display(iNo);
		sobj.close();
	}
}


