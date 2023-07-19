import java.util.*;

class Numbers{
    public void CommonFactors(int iNo1,int iNo2){
        int iCnt=0,iCondition=0;

        if(iNo1>iNo2){
            iCondition=iNo2;
        }else{
            iCondition=iNo1;
        }

        for(iCnt=1;iCnt<=iCondition;iCnt++){
            if((iNo1%iCnt)==0 && (iNo2%iCnt)==0){
                System.out.println(iCnt);
            }
        }

    }
}
public class Program12 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter no 1");
        int iValue1=sobj.nextInt();

        System.out.println("enter no 2");
        int iValue2=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.CommonFactors(iValue1, iValue2);

        sobj.close();
    }
}
