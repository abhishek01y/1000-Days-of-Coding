import java.util.*;

class liners {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        boolean found=false;
        int target =  sc.nextInt();
        for(int i =0;i<n;i++){
            if(target==arr[i]){
                System.out.print("Element is in array");
                found = true;
                break;
            }
        }
        if(found ==false){
            System.out.print("Element not found");
        }
        sc.close();
    }
}