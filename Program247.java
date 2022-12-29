import java.util.Scanner;
public class Program247 {

    static int Addition(int i,int j)
    {
        int iSum=0;
        iSum=i+j;
        return iSum;
    }
    
    public static void main(String ars[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

        System.out.println("enter seconf number :");
        iNo2=sobj.nextInt();

        iAns=Addition(iNo1,iNo2);

        System.out.println("Addition is :"+iAns);

        sobj.close();
    }
}
