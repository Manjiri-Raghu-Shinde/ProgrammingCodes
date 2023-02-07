import java.util.*;

class AdditionOfTwoNumbers{
    int Addition(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }
}
class Mainx
{
    public static void main(String arr[]) {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0;
        int iValue2=0;
        System.out.println("Enter your first Number:");
        iValue1=sobj.nextInt();
        System.out.println("Enter your second Number:");
        iValue2=sobj.nextInt();

        AdditionOfTwoNumbers aobj=new AdditionOfTwoNumbers();
        int iret=aobj.Addition(iValue1,iValue2);
        System.out.println("Addition is:"+iret);

        sobj.close();
    }
}