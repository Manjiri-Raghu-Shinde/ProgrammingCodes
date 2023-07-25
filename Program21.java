import java.util.Scanner;

class Numbers{
    public boolean CheckPalindrome(int iValue){
        int iTemp=iValue;
        int iDigit=0,Reverse=0;

        while(iTemp!=0){
            iDigit=iTemp%10;
            Reverse=(Reverse*10)+iDigit;
            iTemp=iTemp/10;
        }

        if(Reverse==iValue){
            return true;
        }else{
            return false;
        }

    }
}
public class Program21 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        int iValue=0;
        System.out.println("enter no");
        iValue=sobj.nextInt();

        Numbers nobj=new Numbers();
        boolean bRet=nobj.CheckPalindrome(iValue);

        if(bRet==true){
            System.out.println("the number is palindrome");
        }else{
            System.out.println("the number is not palindrome");
        }
    }
}
