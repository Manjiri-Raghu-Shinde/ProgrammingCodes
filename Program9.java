import java.util.*;

public class Program9 {
    public static void main(String aer[]){

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter no 1:");
        int ivalue1=sobj.nextInt();

        System.out.println("enter no 2:");
        int ivalue2=sobj.nextInt();

        int iAns=ivalue1+ivalue2;

        System.out.println("Addition is:"+iAns);

        sobj.close();

    }
}
