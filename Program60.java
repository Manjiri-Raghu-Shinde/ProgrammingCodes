/*
 * def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair
 */

import java.util.Scanner;

class Solution{
    public int ProductSmallestPair(int sum, int arr[]){
        if(arr.length==0 || arr.length<2){
            return 0;
        }
        int itemp=0;
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    itemp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=itemp;
                }
            }
        }

        int sump=arr[0]+arr[1];

        if(sump<=sum){
            return arr[0]*arr[1];
        }else{
            return 0;
        }

        
    }
}
public class Program60 {
    public static void main (String[]args)
  {
    Scanner sc = new Scanner(System.in);
        
        int sum = sc.nextInt();
        int n = sc.nextInt();
        int arr[]=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        Solution obj = new Solution();
        int iret=obj.ProductSmallestPair(sum, arr);
        System.out.println(iret);
        
  }
}


