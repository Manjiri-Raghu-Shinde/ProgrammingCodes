import java.util.*;

class AdditionOperation{
    public int Addition(int iNo1,int iNo2){
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }
}
public class Program10 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter no 1:");
        int iValue1=sobj.nextInt();

        System.out.println("Enter no 2:");
        int iValue2=sobj.nextInt();

        AdditionOperation aobj=new AdditionOperation();

        int iRet=aobj.Addition(iValue1, iValue2);

        System.out.println("Addition is:"+iRet);

        sobj.close();

    }
}
