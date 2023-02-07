import java.util.Scanner;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCnt=0,iCnt1=0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt1++;
            }
        }
        return iCnt-iCnt1;
    }
    
}

public class Program31_3 {
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string : ");
        String s = sobj.nextLine();
        StringDemo dobj=new StringDemo();
        int iRet=dobj.CountDiff(s);
        System.out.println("The difference is : "+iRet);
        sobj.close();
    }
}
