import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCnt = 0;
       
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i]=='(')
            {
                iCnt++;
            }
            else
            {
                iCnt--;
            }
        }
        return iCnt;
    }
}

class Program45_2
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please string1 : ");
        String str = sobj.nextLine();
        MarvellousX obj = new MarvellousX();
        int iRet = obj.CapCount(str);
        if(iRet!=0)
        {
            System.out.println("not a balanced parathesis");
        }
        else
        {
            System.out.println("balanced paranthesis");
        }
        sobj.close();
    }
}
