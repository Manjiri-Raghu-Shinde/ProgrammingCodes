import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo){
        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++){
            if((iNo%iCnt)==0 && iCnt%2 ==0){
                System.out.println(iCnt);
            }
        }
    }
}
public class Program11 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter no:");
        int iValue=sobj.nextInt();

        Numbers nobj=new Numbers();

        nobj.EvenFactorsDisplay(iValue);

        sobj.close();

    }
    
}
