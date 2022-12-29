import java.util.Scanner;

class Numbers
{
    public void OddFactorsDisplay(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=(iNo/2);iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                if((iCnt%2)!=0)
                {
                System.out.println(iCnt);
                }
            }
        }
    }
}
public class Program251 {
    public static void main(String ae[])
    {
        int iNo1=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.OddFactorsDisplay(iNo1);

        sobj.close();
    }
}
