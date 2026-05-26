import java.util.*;
class reverse2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr= new int[n];
        for(int i =0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        int left = 0;
        int right =n-1;
        for(int i=0;i<n;i++){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right]= temp;
        }
        for(int i=0;i<n;i++){
        System.out.print( arr[i]+" ");
        }
        sc.close();
    }
}