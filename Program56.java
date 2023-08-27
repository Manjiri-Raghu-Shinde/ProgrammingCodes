/*
 * The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i
 */

import java.util.Scanner;

class Solution{
    public int RatProb(int arr[],int r,int unit){
        int total_food=r*unit;
        int Sum=0;
        int iCnt=0;

        if(arr.length==0){
            return -1;
        }

        for(iCnt=0;iCnt<arr.length;iCnt++){
            if(Sum>=total_food){
                break;
            }
            
            Sum=Sum+arr[iCnt];

            
        }

        if(Sum<total_food){
            return 0;
        }

        return iCnt;
    }
}
public class Program56 {
    public static void main (String[]args)
  {
    Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int unit = sc.nextInt();
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        Solution obj = new Solution();
        int iret = obj.RatProb(arr, r, unit);

        System.out.println(iret);
  }
}
