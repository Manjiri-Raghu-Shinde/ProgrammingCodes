import java.util.Scanner;

class Solution {
    public int reverse(int x) {
        // if(x<0){
        //     x=-(x);
        // }

        // System.out.println(x);
        int iDigits=0;
        int iTemp=x;
        int iRev=0;

        while(iTemp!=0){
            iDigits=iTemp%10;
            iRev=(iRev*10)+iDigits;
            iTemp=iTemp/10;
        }

        

        return iRev;
    }
}

public class Program53 {
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string:");
        int s=sobj.nextInt();

        Solution obj=new Solution();
        int iRet=obj.reverse(s);

        System.out.println(iRet);

    }
}
