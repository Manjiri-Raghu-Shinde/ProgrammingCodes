import java.util.*;

public class Program6 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        int iCnt=0,iSize=0;

        System.out.println("enter size of array;");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("enter elements of array using for loop:");
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=sobj.nextInt();
        }

        iCnt=0;

        System.out.println("display elements using while loop");
        while(iCnt<Arr.length){
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        iCnt=0;
        
         System.out.println("display elements using do while loop");
         do{
            System.out.println(Arr[iCnt]);
            iCnt++;
         }while(iCnt<Arr.length);

        System.out.println("display elements using for each loop");
        for(int iNo:Arr){
            System.out.println(iNo);
        }

        sobj.close();
    }
}
