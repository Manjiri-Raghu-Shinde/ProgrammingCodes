    
import java.util.Scanner;

class Numbers{
    public int iNo=0;

    Numbers(int iValue){
        this.iNo=iValue;
    }

    public void PrimeFactorization(){
        int iQuotient=iNo;
        int iDivisor=2;

        while(iQuotient!=1){
            if(iQuotient%iDivisor==0){
                iQuotient=iQuotient/iDivisor;
                System.out.println(iDivisor);
                iDivisor=2;
            }
            else{
                iDivisor++;
            }
        }
    
    }
}

public class Program48 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter a value:");
        int iValue=sobj.nextInt();

        Numbers obj=new Numbers(iValue);
        obj.PrimeFactorization();

       
    }
}

