import java.util.Scanner;
class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0, j = 0;
        int iCnt=0;
        int jX=0;

        for(i = 0; i< Arr.length; i++)
        {
            for(j = i; j < Arr.length; j++)
            {
                System.out.print(Arr[iCnt]+"\t");
                iCnt++;
                for(jX=0;jX<i;jX++)
                {
                    System.out.print("*\t");
                }
            }
            iCnt=0;
            System.out.println();
        }      
    }
}

class Program39_2
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = sobj.nextLine();
        pobj.Display(s);
        sobj.close();
    }
}

