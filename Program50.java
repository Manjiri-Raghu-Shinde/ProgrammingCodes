import java.util.*;

class NumberX{
    public int iValue1=0;
    public int iValue2=0;

    NumberX(int iNo1,int iNo2){
        this.iValue1=iNo1;
        this.iValue2=iNo2;
    }

    public int LCM(){
        int iGCD=0;
        int iSize=0;

        if(iValue1>iValue2){
            iSize=iValue2;
        }else{
            iSize=iValue1;
        }

        for(int iCnt=1;iCnt<iSize;iCnt++){
            if(iValue1%iCnt==0 && iValue2%iCnt==0){
                iGCD=iCnt;
            }
        }



        return (iValue1*iValue2)/iGCD;
    }
}
public class Program50 {
    public static void main(String aee[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter number1:");
        int iNumber1=sobj.nextInt();

        System.out.println("enter number2:");
        int iNumber2=sobj.nextInt();

        NumberX obj=new NumberX(iNumber1, iNumber2);
        int iRet=obj.LCM();

        System.out.println("LCM is:"+iRet);
    }

}

