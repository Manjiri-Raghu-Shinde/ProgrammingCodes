import java.util.*;

class MarvellousX
{
    public boolean CapCount(String s,String s1)
    {
        int iCnt = 0;
        boolean flag=false;
        
        char Arr[] = s.toCharArray();
        char Arr1[]=s1.toCharArray();
        int iCnt1=Arr1.length-1;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr1[iCnt1]==Arr[iCnt])
            {
                flag=true;
            }
            iCnt1--;
        }
        return flag;
    }
}

class Progrm45_1
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please string1 : ");
        String str = sobj.nextLine();
        System.out.println("Please string2 : ");
        String str1 = sobj.nextLine();
        MarvellousX obj = new MarvellousX();
        boolean iRet = obj.CapCount(str,str1);
        if(iRet==true)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }
        sobj.close();
    }
}