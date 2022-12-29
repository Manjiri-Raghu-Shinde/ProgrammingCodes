import java.util.Scanner;

class MarvellousX
{
    public int SmallCount(String s)
    {

        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='a' && s.charAt(i)<='z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program267
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter String");
        String str=sobj.nextLine();
        MarvellousX mobj=new MarvellousX();
        int iRet=mobj.SmallCount(str);
        System.out.println("the count of small letters is "+iRet);
        sobj.close();
    }
}

