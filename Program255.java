import java.util.Scanner;

class Numbers
{
    public void CommonFactorsDisplay(int iNo1,int iNo2)
    {
        int iCnt=0;
        System.out.println("Common Factors are :");
        for(iCnt=1;(iCnt<=(iNo1/2)) && (iCnt<=(iNo2/2));iCnt++)
        {
            if((iNo1%iCnt)==0 && (iNo2%iCnt)==0)
            {
                System.out.println(iCnt);
            }
            
        }
    }
}
public class Program255 {
    public static void main(String ae[])
    {
        int iNo1=0,iNo2=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number :");
        iNo1=sobj.nextInt();

        System.out.println("enter second number :");
        iNo2=sobj.nextInt();

        Numbers nobj=new Numbers();
        nobj.CommonFactorsDisplay(iNo1,iNo2);

        sobj.close();
    }
}


