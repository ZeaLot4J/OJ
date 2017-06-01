import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int m = 0, n = 0;
        int[][] score = null;
        int mr = 0, mc = 0, max = 0;
        while (scan.hasNext()) {
            m = scan.nextInt();
            n = scan.nextInt();
            score = new int[m][n];
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    score[i][j] = scan.nextInt();
                }
            }
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(Math.abs(score[i][j])>Math.abs(max)) {
                        max = score[i][j];
                        mr = i;
                        mc = j;
                    }
                }
            }
            System.out.print(mr+1);
            System.out.print(" "+(mc+1+" "));
            System.out.println(max);
            max = 0;
        }
    }
}