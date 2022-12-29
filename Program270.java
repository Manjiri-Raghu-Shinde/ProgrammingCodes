import java.util.Scanner;
class Program270
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter String");
        String str=sobj.nextLine();
        
        char Arr[]=str.toCharArray();
        System.out.println(Arr);
        sobj.close();
    }
}


