import java.util.*;

class Numbers{
    public boolean checkArmstrong(int iValue){
        int iDigit=0,iCnt=0,iMult=1,iSum=0;
        int iCount=0,iTemp=iValue;

        while(iTemp!=0){
            iDigit=iTemp%10;
            iCount++;
            iTemp=iTemp/10;
        }

        iTemp=iValue;

        while(iTemp!=0){
            iDigit=iTemp%10;

            for(iCnt=1;iCnt<=iCount;iCnt++){
                iMult=iMult*iDigit;
            }
            iSum=iSum+iMult;
            iMult=1;
            
            iTemp=iTemp/10;

        }

        iTemp=iValue;

        if(iSum==iTemp){
            return true;
        }else{
            return false;
        }
    }

}
public class Program15 {
    public static void main(String arr[])   {
        Scanner sobj=new Scanner(System.in);
        int iValue=0;
        System.out.println("enter no:");

        iValue=sobj.nextInt();

        Numbers nobj=new Numbers();

        boolean bRet=nobj.checkArmstrong(iValue);

        if(bRet==true){
            System.out.println("number is armstrong");

        }else{
            System.out.println("no it is not");
        }
    }
}
