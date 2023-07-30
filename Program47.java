import java.util.Scanner;

class DigitsCalculation{

    public int iValue=0;

    DigitsCalculation(int iNo){
        this.iValue=iNo;
    }

    public boolean isPalindrome(){
        int iDigits=0;
        int iTemp=iValue;
        int iRev=0;

        while(iTemp!=0){
            iDigits=iTemp%10;

            iRev=(iRev*10)+iDigits;

            iTemp=iTemp/10;
        }

        if(iRev==iValue){
            return true;
        }else{
            return false;
        }
    }
}
public class Program47 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter the number");
        int iNumber=sobj.nextInt();

        DigitsCalculation dobj=new DigitsCalculation(iNumber);
        boolean bRet=dobj.isPalindrome();

        if(bRet==true){
            System.out.println("palidrome");
        }else{
            System.out.println("not palidrome");
        }
    }
}
