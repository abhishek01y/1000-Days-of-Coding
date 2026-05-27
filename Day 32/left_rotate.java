import java.util.*;

class left_rotate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        System.out.print("Enter number of left rotation you want to do: ");
        int a = sc.nextInt();
        int b = a % n;
        int j=0;
        int[] arr1 =new int[n];
        for(int i = b;i<n;i++){
            arr1[j]=arr[i];
            j++;
        }
        for(int i=0;i<b;i++){
            arr1[j]=arr[i];
            j++;
        }
        for(int i=0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        sc.close();
    }
}