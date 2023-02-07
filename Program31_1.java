import java.util.Scanner;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    
}
class Program31_1
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string : ");
        String s = sobj.nextLine();
        StringDemo dobj=new StringDemo();
        int iRet=dobj.CountCapital(s);
        System.out.println("The count is : "+iRet);
        sobj.close();
    }
}