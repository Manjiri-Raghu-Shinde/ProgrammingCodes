import java.util.Scanner;
public class Program271 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter String");
        String str=sobj.nextLine();
        
        char Arr[]=str.toCharArray();
        
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
        sobj.close();
    }
}
