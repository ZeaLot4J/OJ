import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, cnt = 0, m = 0, flag = 1;
        int[][] score = null;
        double[] aver = null;
        double[] course = null;
        double sum1 = 0, sum2 = 0;
        while (scan.hasNext()) {
            n = scan.nextInt();
            m = scan.nextInt();
            score = new int[n][m];
            aver = new double[n];
            course = new double[m];
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    score[i][j] = scan.nextInt();
                    sum1 += score[i][j];
                }
                aver[i] = sum1 / m;
                sum1 = 0;
            }
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    sum2 += score[j][i];
                }
                course[i] = sum2 / n;
                sum2 = 0;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(score[i][j]<course[j]){
                        flag = 0;
                        break;
                    }
                }
                if(flag==1) cnt++;
                else flag = 1;
            }
            for(int i=0; i<aver.length; i++){                
                System.out.printf("%.2f",aver[i]);
                if(i==aver.length-1) continue;
                System.out.print(" ");
            }
            System.out.println();
            for(int i=0; i<course.length; i++){                
                System.out.printf("%.2f",course[i]);
                if(i==course.length-1) continue;
                System.out.print(" ");
            }
            System.out.println();
            System.out.println(cnt);
            cnt = 0;
            System.out.println();
        }
    }
}