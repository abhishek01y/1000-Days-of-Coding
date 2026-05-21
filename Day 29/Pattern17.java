public class Pattern17 {
    public static void main(String[] args){
        String num = "A";
        for(int i=1;i<5;i++){
            for(int j =1;j<5-i;j++){
                System.out.print(" ");
            }
            for(char j = 'A';j<'A'+i;j++){
                System.out.print(j);
            }
            for(int j = 1;j<i;j++){
                System.out.print(num+i);
                num = num+1;
            }
            System.out.println();
        }
    }
    
}
