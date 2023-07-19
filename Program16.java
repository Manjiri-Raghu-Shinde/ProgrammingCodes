import java.util.*;

class ArrayX{
    public int Arr[];

    public ArrayX(int iSize){
        Arr=new int [iSize];
    }

    public void RecieveElements(){
        int iCnt=0;
        Scanner sobj1=new Scanner(System.in);
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=sobj1.nextInt();
        }
    }

    public void DisplayElements(){
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++){
            System.out.println(Arr[iCnt]);
        }
    }

}
public class Program16 {
    public static void main(String arr[]){

        Scanner sobj=new Scanner(System.in);

        int iSize=0;
        System.out.println("enter size of array:");
        iSize=sobj.nextInt();

        ArrayX axobj=new ArrayX(iSize);
        axobj.RecieveElements();
        axobj.DisplayElements();

    }
}
