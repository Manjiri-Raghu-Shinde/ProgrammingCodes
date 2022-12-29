import java.util.Scanner;

class Pattern
{
	public void Display(int iRow,int iCol)
	{
		for(int iCnt=1;iCnt<=iRow;iCnt++)
		{
			for(int iCnt1=1;iCnt1<=iCol;iCnt1++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
}
class Program273
{
	public static void main (String arr[])
	{
		Scanner sobj=new Scanner(System.in);
		Pattern pobj=new Pattern();
		System.out.println("enter number of rows :");
		int i = sobj.nextInt();
		System.out.println("enter number of columns :");
		int j=sobj.nextInt();
		pobj.Display(i,j);
		sobj.close();
	}
}
