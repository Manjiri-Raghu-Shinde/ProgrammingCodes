import java.util.Scanner;

class Arithmatic
{
    public int Addition(int i,int j)
    {
        int iSum=0;
        iSum=i+j;
        return iSum;
    }
    
}

public class Program248 {
    public static void main(String ad[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("enter first number: ");
        iNo1=sobj.nextInt();

        System.out.println("enter second number: ");
        iNo2=sobj.nextInt();

        Arithmatic aobj = new Arithmatic();
        iAns=aobj.Addition(iNo1,iNo2);

        System.out.println("Addition is :"+iAns);

        sobj.close();
    }
}
