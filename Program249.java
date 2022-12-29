import java.util.Scanner;

class Arithmatic
{
    public int iValue1;   
    public int iValue2;

    public Arithmatic(int i,int j)
    {
        iValue1=i;
        iValue2=j;
    }
    public int Addition()
    {
        int iSum=0;
        iSum=iValue1+iValue2;
        return iSum;
    }
    
}
public class Program249 {
    public static void main(String a[])
    {
    
        Scanner sobj=new Scanner(System.in);
        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("enter first number: ");
        iNo1=sobj.nextInt();

        System.out.println("enter second number: ");
        iNo2=sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo1,iNo2);
        iAns=aobj.Addition();

        System.out.println("Addition is :"+iAns);

        sobj.close();
    }
    
}
