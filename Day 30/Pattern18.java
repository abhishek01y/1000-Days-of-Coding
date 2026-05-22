class Pattern18{
    public static void main(String[] args){
        for(int i =1;i<=5;i++){
            for(char j = (char)('A'+5-i);j<'A'+5;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}