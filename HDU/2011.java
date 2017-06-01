import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int m =0, n;
        double sum = 0;
        while(scan.hasNext()){
            m = scan.nextInt();
            for(int i=0; i<m; i++){
                n = scan.nextInt();
                for(int j=1; j<=n; j++){
                    sum += 1/(Math.pow(-1,j+1)*j);
                }
                System.out.printf("%.2f", sum);
                System.out.println();
                sum = 0;
            }
        }
    }

}