import java.util.Scanner;

class Digit
{
    private int CountDigits(int iNo)
    {
        int iCnt=0;
        while(iNo!=0)
        {
            iCnt++;
            iNo=iNo/10;
        }

        return iCnt;
    }

    private int Power(int Base,int Index)
    {
        int iAns=1;
        for(int iCnt=1;iCnt<=Index;iCnt++)
        {
            iAns=iAns*Base;
        }

        return iAns;
    }

    public boolean CheckArmstrong(int iNo)
    {
        int iSum=0;
        int iDigit=0;
        int temp=iNo;
        int iCount=CountDigits(iNo);

        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+Power(iDigit,iCount);
            iNo=iNo/10;
        }

        if(temp==iSum)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
public class Program257 {
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