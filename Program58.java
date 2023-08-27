/*
 * def differenceofSum(n. m)

The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.
 */

import java.util.Scanner;

class Solution{
    public int differenceofSum(int n,int m){
        int sum=0;
        int sum1=0;

        for(int iCnt=1;iCnt<=m;iCnt++){
            if(iCnt % n == 0){
                sum=sum+iCnt;
            }else{
                sum1=sum1+iCnt;
            }
        }

        return sum1-sum;
    }
}
public class Program58 {
    public static void main (String[]args)
  {
    Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();

        Solution obj = new Solution();
        int iret=obj.differenceofSum(n, m);
        System.out.println(iret);
        
  }
}


