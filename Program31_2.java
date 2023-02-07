import java.util.Scanner;

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    
}

public class Program31_2 {
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string : ");
        String s = sobj.nextLine();
        StringDemo dobj=new StringDemo();
        int iRet=dobj.CountSmall(s);
        System.out.println("The count is : "+iRet);
        sobj.close();
    }
}
