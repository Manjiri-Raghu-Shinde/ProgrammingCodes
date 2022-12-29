import java.util.*;

class Arithmatic
{
    public int Division(int A,int B) throws ArithmeticException
    {
        int Ans=0;
        Ans=A/B;
        return Ans;
    }
}

public class ThrowsDemo {
    public static void main(String arf[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter first number");
        int iNo1=sobj.nextInt();

        System.out.println("enter second number");
        int iNo2=sobj.nextInt();

        Arithmatic aobj=new Arithmatic();

        try
        {
            int Ret=aobj.Division(iNo1, iNo2);
            System.out.println("Division is:"+Ret);

        }

        catch(ArithmeticException obj)
        {
            System.out.println("exception occured");
            System.out.println(obj);
        }

        finally
        {
            sobj.close();
        }
    }
    
}
