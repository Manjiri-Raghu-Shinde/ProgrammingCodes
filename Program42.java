import java.util.Scanner;

class Numbers{
    public int iValue=0;
    public int iDigit=0;
    public int iSum=0;

    Numbers(int iNo){
        this.iValue=iNo;
    }

    public int SumOfDigits(){

        while(iValue!=0){
            iDigit=iValue%10;
            iSum=iSum+iDigit;
            iValue=iValue/10;
        }

        return iSum;
    }
}
public class Program42 {
    public static void main(String arr[]){

        Scanner sobj=new Scanner(System.in);
        System.out.println("enter number");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers(iValue);
        int iret=nobj.SumOfDigits();

        System.out.println("sum is:"+iret);


    }
}
