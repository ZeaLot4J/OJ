import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double r = 0;
        double v = 0;
        final double PI = 3.1415927;
        while(scan.hasNextDouble()){
            r = scan.nextDouble();
            v = 4*PI*r*r*r/3;
            System.out.printf("%.3f",v);
            System.out.println();
        }
    }

}