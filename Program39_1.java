import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0, j = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(i==Arr.length-1)
                {
                    break;
                }
            for(j = 0; j < Arr.length; j++)
            {
                if(i<j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(Arr[j]+"\t");   
                }
                
            }

            System.out.println();
        }      
           
    }
}

class Program39_1
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

