import java.util.*;

class Digits
{
    public int Multiply(int iNo)
    {
       
        int iTemp = iNo;
        int iDigit = 0;
        int iMult=1;

        while(iTemp != 0)    // Logic to calculate no of digits
        {
            iDigit=iTemp%10;
            iMult=iMult*iDigit;
            iTemp = iTemp / 10;
        }
        return iMult;
}
}
class Program33_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet=dobj.Multiply(iNo);
        System.out.println("the multiplication is :"+iRet);
        sobj.close();
    }
}

