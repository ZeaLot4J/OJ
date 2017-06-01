import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, sum = 1;
        while (scan.hasNext()) {
            n = scan.nextInt();
            for (int i = 1; i < n; i++) {
                sum = (sum+1)*2;
            }
            System.out.println(sum);
            sum = 1;
        }
    }

}