import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0;
        double sum = 0, aver = 0;
        double[] score = null;
        while(scan.hasNext()){
            n = scan.nextInt();
            score = new double[n];
            for(int i=0; i<n; i++){
                score[i] = scan.nextDouble();
            }
            Arrays.sort(score);
            for(int i=1; i<score.length-1; i++){
                sum += score[i];
            }
            aver = sum / (score.length-2);
            System.out.printf("%.2f",aver);
            System.out.println();
            sum = 0;
        }
    }

}