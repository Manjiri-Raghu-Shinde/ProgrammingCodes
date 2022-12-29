import java.util.Scanner;

class MarvellousX
{
    public int LargeCount(String s)
    {

        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='A' && s.charAt(i)<='Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program268
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter String");
        String str=sobj.nextLine();
        MarvellousX mobj=new MarvellousX();
        int iRet=mobj.LargeCount(str);
        System.out.println("the count of large letters is "+iRet);
        sobj.close();
    }
}


