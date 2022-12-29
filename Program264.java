import java.util.Scanner;

class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter your full name");
        String str=sobj.nextLine();

        System.out.println("number of characters : "+str.length());

        sobj.close();
    }
}
