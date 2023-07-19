import java.util.*;

public class Program5 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        int iCnt=0;
        int iSize=0;

        System.out.println("enter size of array");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("enter elements of array");
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("elements of array");
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}
