/*
 * nt findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.
 */

 /*
 * The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i
 */

import java.util.Scanner;

class Solution{
    public int findCount(int arr[],int num,int diff){
        int Count=0;
        int currentdif=0;

        for(int iCnt=0;iCnt<arr.length;iCnt++){
            currentdif=num-arr[iCnt];

            if(currentdif<0){
                currentdif=-(currentdif);
            }

            if(currentdif<=diff){
                Count++;
            }
        }

        return Count;
        

    }
}
public class Program57 {
    public static void main (String[]args)
  {
    Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        
        int num = sc.nextInt();
        int diff = sc.nextInt();

        Solution obj = new Solution();
        int iret=obj.findCount(arr, num, diff);
        System.out.println(iret);
  }
}

