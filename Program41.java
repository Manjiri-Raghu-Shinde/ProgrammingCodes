import java.util.Scanner;

class Numbers{
    public int iNo;

    Numbers(int iValue){
        this.iNo=iValue;
    }

    public boolean EvenOdd(){
        if(iNo % 2==0){
            return true;
        }else{
            return false;
        }
    }
}
public class Program41 {
    public static void main(String arr[]){

        Scanner sobj=new Scanner(System.in);
        System.out.println("enter number");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers(iValue);
        boolean bret=nobj.EvenOdd();

        if(bret==true){
            System.out.println("even");
        }else{
            System.out.println("odd");
        }


    }
}
