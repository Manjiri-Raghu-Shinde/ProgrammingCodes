import java.util.Scanner;

class Pattern
{
	public void Display(int iNo)
	{
        int iDigit=0;
        int iTemp1=iNo;
        int iTemp2=iNo;
        while(iTemp1!=0)
        {
                
                while(iNo!=0)
                {
                    iDigit=iTemp2%10;
                    System.out.print(iDigit+"\t");
                    iTemp2=iTemp2/10;
                }
                iTemp2=iNo;
                System.out.println();
                iTemp1=iTemp1/10;
        }
                
    }
}
class Program284
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



