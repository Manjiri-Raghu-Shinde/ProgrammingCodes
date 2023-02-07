
import java.util.Scanner;

class StringDemo
{
    public void Reverse(String str)
    {
  
        for(int i = str.length()-1; i >= 0; i--)
        {
            System.out.println(str.charAt(i));
        }

    }
    
}

public class Program31_5 {
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string : ");
        String s = sobj.nextLine();
        StringDemo dobj=new StringDemo();
        dobj.Reverse(s);
        sobj.close();
    }
}

