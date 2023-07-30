import java.util.Scanner;

class Numbers{
    public int iNo=0;

    Numbers(int iValue){
        this.iNo=iValue;
    }

    public int FactorialCalculation(){
        int iCnt=0;
        int iMult=1;

        for(iCnt=1;iCnt<=iNo;iCnt++){
            iMult=iMult*iCnt;
        }

        return iMult;
    }
}

public class Program45 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter a value:");
        int iValue=sobj.nextInt();

        Numbers obj=new Numbers(iValue);
        int iRet=obj.FactorialCalculation();

        System.out.println("factorial is:"+iRet);
        
    }
}
