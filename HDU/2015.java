import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, m = 0, sum = 0, remain = 0, aver = 0;
        int[] even = new int[100];
        for(int i=0,j=2; i<100; i++,j+=2){
            even[i] = j;
        }
        while(scan.hasNext()){
            n = scan.nextInt();
            m = scan.nextInt();
            remain = n % m;
            for(int i=0; i<n-remain; i+=m){
                for(int j=0; j<m; j++){
                    sum += even[j+i];
                }
                if(i==0)
                    System.out.print(sum/m);
                else
                    System.out.print(" "+sum/m);
                sum = 0;
            }
            if(remain!=0){
                for(int i=n-remain; i<n; i++){
                    sum += even[i];
                }
                System.out.print(" "+sum/remain);
                sum = 0;                
            }
            System.out.println();
        }
    }

}