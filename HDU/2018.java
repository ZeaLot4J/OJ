import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0;
        while(scan.hasNext()){
            n = scan.nextInt();
            if(n==0) break;
            System.out.println(func(n));
        }
    }
    public static int func(int n){
        if(n<=4) return n;
        else{            
            return func(n-1)+func(n-3);
        }
    }

}