import java.util.*;

class Digits
{
    public int CountRange(int iNo)
    {
       
        int iTemp = iNo;
        int iDigit = 0;
        int iCnt = 0;

        while(iTemp != 0)    // Logic to calculate no of digits
        {
            iDigit=iTemp%10;
            if(iDigit>=3 && iDigit<=7)
            {
                iCnt++;
            }
            iTemp = iTemp / 10;
        }
        return iCnt;
}
}
class Program33_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet=dobj.CountRange(iNo);
        System.out.println("the count is :"+iRet);
        sobj.close();
    }
}

