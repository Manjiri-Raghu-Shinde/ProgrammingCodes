import java.util.*;

class Digits
{
    public int CountDiff(int iNo)
    {
       
        int iTemp = iNo;
        int iDigit = 0;
        int iSum = 0 , iSum1=0;

        while(iTemp != 0)    // Logic to calculate no of digits
        {
            iDigit=iTemp%10;

            if(iDigit%2==0)
            {
                iSum=iSum+iDigit;
            }
            else
            {
                iSum1=iSum1+iDigit;
            }

            iTemp = iTemp / 10;
        }

        return iSum-iSum1;
}
}
class Program33_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet=dobj.CountDiff(iNo);
        System.out.println("the difference is :"+iRet);
        sobj.close();
    }
}
