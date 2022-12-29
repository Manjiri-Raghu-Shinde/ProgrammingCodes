import java.util.Scanner;

class Numbers
{
    public int MultiplyFactorsDisplay(int iNo1)
    {
        int iCnt=0;
        int iMult=1;
       
        for(iCnt=1;(iCnt<=(iNo1/2));iCnt++)
        {
            if((iNo1%iCnt)==0)
            {
                iMult=iMult*iCnt;
            }
        }

        return iMult;
    }
}
public class Program256 {
    public static void main(String ae[])
    {
        int iNo1=0;
        int iAns=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

    
        Numbers nobj=new Numbers();
        iAns=nobj.MultiplyFactorsDisplay(iNo1);

        System.out.println("Multiplication of Factors is "+iAns);

        sobj.close();
    }
}



