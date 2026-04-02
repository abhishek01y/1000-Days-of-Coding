import java.util.*;
class loops{
    public static void main(String[] args){
        Scanner a = new Scanner(System.in);
        int age = a.nextInt();
        if(age>=18){
            System.out.println("Adult");
        }
        else {
            System.out.println("Not Adult");
        }
        a.close();
    }
    }
