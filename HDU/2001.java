import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        double x1=0, y1=0, x2=0, y2=0, result=0;
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext()){
            x1 = scan.nextDouble();
            y1 = scan.nextDouble();
            x2 = scan.nextDouble();
            y2 = scan.nextDouble();
            result = Math.sqrt(Math.pow((x1-x2), 2)+Math.pow((y1-y2), 2));
            System.out.printf("%.2f", result);
            System.out.println();
        }
    }

}