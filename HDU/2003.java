import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double dval = 0;
        while(scan.hasNextDouble()){
            dval = scan.nextDouble();
            System.out.printf("%.2f", Math.abs(dval));
            System.out.println();
        }
    }

}