import java.util.Scanner;

class MarvellousX
{
    public int DigitCount(String s)
    {

        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='1' && s.charAt(i)<='9')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program269
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter String");
        String str=sobj.nextLine();
        MarvellousX mobj=new MarvellousX();
        int iRet=mobj.DigitCount(str);
        System.out.println("the count of digit is "+iRet);
        sobj.close();
    }
}


