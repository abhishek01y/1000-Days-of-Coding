class Pattern17{
    public static void main(String[] args){
        for(int i =1;i<=4;i++){
            for(int j =5;j>i+1;j--){
                System.out.print(" ");
            }
            for(char  j ='A';j<'A'+i;j++){
                System.out.print(j);
            }
            for(char j =(char)('A'+i-2);j>='A';j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}