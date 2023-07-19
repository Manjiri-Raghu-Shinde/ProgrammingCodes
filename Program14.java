import java.util.*;

class Numbers{
    public int CountDigits(int iNo){
        int iDigits=0,iCount=0;

        while(iNo!=0){
            iDigits=iNo%10;
            iCount++;
            iNo=iNo/10;
        }

        return iCount;
    }
}
public class Program14 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter no:");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers();
        int iRet=nobj.CountDigits(iValue);

        System.out.println("count of digits:"+iRet);

    }
}
