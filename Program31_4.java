import java.util.Scanner;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int iCnt=0;   
        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) == 'a') || (str.charAt(i) == 'e') ||  (str.charAt(i)=='i') ||  (str.charAt(i)=='o') ||  (str.charAt(i)=='u'))
            {
                iCnt++;
            } 
        }

        if(iCnt!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

public class Program31_4 {
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string : ");
        String s = sobj.nextLine();
        StringDemo dobj=new StringDemo();
        boolean iRet=dobj.ChkVowel(s);
        if(iRet==true)
        {
            System.out.print("there is vowel in string");
        }
        else
        {
            System.out.print("there is no vowel in string");
        }
        sobj.close();
    }
}

