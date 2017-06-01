import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double n = 0, sum = 0;
        int m = 0;
        while(scan.hasNext()){
            n = scan.nextInt();
            m = scan.nextInt();
            for(int i=0; i<m; i++){
                sum += n;
                n = Math.sqrt(n);
            }
            System.out.printf("%.2f", sum);
            System.out.println();
            sum = 0;
        }
        scan.close();
    }

}