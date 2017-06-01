import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0;
        int lval = 0, factor = 1;
        while(scan.hasNext()){
            n = scan.nextInt();
            for(int i=0; i<n; i++){
                lval = scan.nextInt();
                factor = factor/Main.gcd(lval, factor)*lval;    
            }
            System.out.println(factor);
            factor = 1;
        }
    }
    public static int gcd(int a, int b){
        if(a%b==0) return b;
        return gcd(b, a%b);
    }
}