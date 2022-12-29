import java.util.Scanner;

class Pattern
{
	public void Display(String str)
	{
        char Arr[]=str.toCharArray();
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr.length;j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }  
	}
}
class Program282
{
	public static void main (String arr[])
	{
		Scanner sobj=new Scanner(System.in);
		Pattern pobj=new Pattern();
		System.out.println("enter string :");
		String s= sobj.nextLine();
		
		pobj.Display(s);
		sobj.close();
	}
}

