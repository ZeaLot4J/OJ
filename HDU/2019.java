import java.util.Arrays;
import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, m = 0, ival = 0;
        int[] ia = null;
        while(scan.hasNext()){
            n = scan.nextInt();
            m = scan.nextInt();
            if(m==0&&n==0) break;
            ia = new int[n+1];
            for(int i=0; i<n; i++){
                ia[i] = scan.nextInt();
            }
            ia[n] = m;
            Arrays.sort(ia);
            System.out.print(ia[0]);
            for(int i=1; i<n+1; i++){
                System.out.print(" "+ia[i]);
            }
            System.out.println();
        }
    }

}