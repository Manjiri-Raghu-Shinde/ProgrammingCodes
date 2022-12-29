import java.util.Scanner;

class MarvellousX
{
    public void Display(String S)
    {
        for(int i=0;i<S.length();i++)
        {
            System.out.println(S.charAt(i));
        }
    }
}
class Program266
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter your full name");
        String str=sobj.nextLine();
        MarvellousX mobj=new MarvellousX();
        mobj.Display(str);
        sobj.close();
    }
}

