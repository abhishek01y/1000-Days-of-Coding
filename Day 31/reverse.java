import java.util.*;
class reverse{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr= new int[n];
        for(int i =0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int[] rev= new int[n];
        for(int i=0;i<n;i++){
            rev[i] = arr[n-1-i];
        }
        
        System.out.println();
        System.out.print("Reverse array: ");
        for(int i=0;i<n;i++){
            System.out.print(rev[i]+" ");
        }
        sc.close();
    }
}