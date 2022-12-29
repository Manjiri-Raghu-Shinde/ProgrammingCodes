import java.util.*;


public class ExceptionDemo1 {
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

            int iNo1=0,iNo2=0,iAns=0;

            System.out.println("enter first number:");
            iNo1=sobj.nextInt();

            System.out.println("enter second number:");
            iNo2=sobj.nextInt();

            iAns=iNo1/iNo2;
        

        System.out.println("Division is:"+iAns);
        
        sobj.close();

    }
    
}
