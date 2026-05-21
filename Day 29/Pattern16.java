class Pattern16{
    public static void main(String[] args){
        for(int i =1;i<=5;i++){
            for(char j =1;j<=i;j++){
                System.out.print((char)('A'+i-1));
            }
            System.out.println();
        }
    }
}