import java.util.*;

class Numbers{
    public int iNo=0;

    Numbers(int iValue){
        this.iNo=iValue;
    }

    public boolean isPrimeNumber(){
        int iCnt=0;
        boolean bflag=true;

        for(iCnt=2;iCnt<iNo;iCnt++){
            if(iNo%iCnt == 0){
                bflag=false;
            }
        }

        return bflag;
    }
}
public class Program44 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter a value:");
        int iValue=sobj.nextInt();

        Numbers obj=new Numbers(iValue);
        boolean bRet=obj.isPrimeNumber();

        if(bRet==true){
            System.out.println("prime no");
        }else{
            System.out.println("not prime no");
        }
    }
}
