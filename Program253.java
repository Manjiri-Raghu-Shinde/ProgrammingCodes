import java.util.Scanner;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {
        int iCnt=0;
        for(iCnt=2;iCnt<=(iNo/2);iCnt=iCnt+2)
        {
            if((iNo%iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class Program253 {
    public static void main(String ae[])
    {
        int iNo1=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.EvenFactorsDisplay(iNo1);

        sobj.close();
    }
}

