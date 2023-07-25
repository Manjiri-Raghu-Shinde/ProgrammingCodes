import java.util.Scanner;

class ArrayX{
    public boolean CheckPalindrome(int Arr[]){
        int iStart=0,iEnd=Arr.length-1;

        boolean bFlag=true;
        while(iStart<iEnd){
            if(Arr[iStart]!=Arr[iEnd]){
                bFlag=false;
                break;
            }
            iStart++;
            iEnd--;
        }

        return bFlag;
    }

}
public class Program20 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        int iSize=0;
        System.out.println("enter size");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("enter elements");
        for(int iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]=sobj.nextInt();
        }

        ArrayX aobj=new ArrayX();
        boolean bRet=aobj.CheckPalindrome(Arr);
        
        if(bRet == true)
        {
            System.out.println("Array is pallindrome");
        }
        else
        {
            System.out.println("Array is not pallindrome");            
        }
        
    }
}
