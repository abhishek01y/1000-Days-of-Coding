import java.util.*;
class large_2nd_large{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        for(int i =0;i<n;i++){
            System.out.print(arr[i]+ " ");
        }
        int max1 = arr[0];
        int max2 = -1;
        for(int i =0;i<n;i++){
            if(max1<arr[i]){
                max2 = max1;
             max1 = arr[i];   
            }
        }
        System.out.println();

        System.out.print("max1: "+max1);
        System.out.print("max2: "+max2);
        sc.close();
    }
}