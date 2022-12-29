import java.util.Scanner;

class MarvellousX
{
    public int LargeCount(String s)
    {

        int iCnt=0;
        char Arr[]=s.toCharArray();
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='A' && Arr[i]<='Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program272
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




