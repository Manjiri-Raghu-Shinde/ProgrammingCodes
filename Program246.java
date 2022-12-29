import java.util.Scanner;
public class Program246 {
    public static void main(String arf[])
    {
        int iNo1=0;
        int iNo2=0;
        int iAns=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number");
        iNo1=sobj.nextInt();

        System.out.println("enter second number");
        iNo2=sobj.nextInt();

        iAns=iNo1+iNo2;

        System.out.println("Addition is :"+iAns);

        sobj.close();
    }
}
