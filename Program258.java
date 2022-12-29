import java.util.Scanner;

class Digit
{

    public boolean CheckArmstrong(int iNo)
    {
        int iDigitCount=0;
        int iTemp=iNo;
        int iDigit=0;
        int iSum=0;
        int iPower=1;
        while(iTemp!=0)
        {
            iDigitCount++;
            iTemp=iTemp/10;
        }

        iTemp=iNo;

        while(iTemp!=0)
        {
            iDigit=iTemp%10;
            for(int iCnt=1;iCnt<=iDigitCount;iCnt++)
            {
                iPower=iPower*iDigit;
            }
            iSum=iSum+iPower;
            iPower=1;
            iTemp=iTemp/10;
         
        }

        if(iNo==iSum)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
}
public class Program258 {
    public static void main(String ae[])
    {
        int iNo1=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

        Digit nobj=new Digit();
        
        boolean bRet=nobj.CheckArmstrong(iNo1);

        if(bRet == true)
        {
            System.out.println("it is a Armstrong number");
        }
        else
        {
            System.out.println("it is not a Armstrong number");  
        }

        sobj.close();
    }
}
