import java.util.*;

class NumberX{
    public int iValue=0;

    NumberX(int iNo1){
        this.iValue=iNo1;
        
    }

    public int Calculation(){
        int iSum=0;
        int iSquaresum=0;

        for(int iCnt=0;iCnt<iValue;iCnt++){
            iSum=iSum+iCnt;
        }

        for(int iCnt=0;iSquaresum<iValue;iCnt++){
            iSquaresum=iSquaresum+(iCnt*iCnt);
        }

        return iSquaresum-(iSum*iSum);
    }
}
public class Program51 {
    public static void main(String aee[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter number:");
        int iNumber=sobj.nextInt();

        NumberX obj=new NumberX(iNumber);
        int iRet=obj.Calculation();

        System.out.println("calculation is:"+iRet);
    }

}

