import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch='A';
        
        for(i = 1; i<= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {   
                System.out.print(ch +"\t");
                ch++;
               
            }
            if(iRow%2==0)
            {
                ch='a';
            }
            else
            {
                ch='A';
            }
            System.out.println();
        } 
    }
}

class Program36_2
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int j = sobj.nextInt();
        
        pobj.Display(i,j);
        sobj.close();
    }
}
