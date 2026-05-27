import java.util.*;
class remove_duplicate {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i] =sc.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        for(int i= 0;i+1<n;i++){
            if(arr[i]!=arr[i+1]){
                System.out.print(arr[i]+" ");
            }
            else
                continue;
        }System.out.print(arr[n-1]);
        sc.close();
    }
}
