import java.util.*;

class Numbers{
    public int FactorsMultiplication(int iNo){
        int iCnt=0,iMult=1;

        for(iCnt=1;iCnt<=iNo;iCnt++){
            if(iNo % iCnt == 0){
                iMult=iMult*iCnt;
            }
        }

        return iMult;
    }
}
public class Program13 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter no:");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers();
        int iRet=nobj.FactorsMultiplication(iValue);

        System.out.println("Multiplication of factors:"+iRet);

        sobj.close();
    }
}
