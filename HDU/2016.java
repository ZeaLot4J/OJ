import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, min =0 ,tmp=0;
        int[] ia = null;
        while(scan.hasNext()){
            n = scan.nextInt();
            if(n==0) break;
            ia = new int[n];
            for(int i=0; i<n; i++){
                ia[i] = scan.nextInt();
                if(i==0) min = 0;
                if(ia[min]>ia[i]) min = i;
            }
            tmp = ia[min];
            ia[min] = ia[0];
            ia[0] = tmp;
            System.out.print(ia[0]);
            for(int i=1; i<n; i++){
                System.out.print(" "+ia[i]);
            }
            System.out.println();
        }
    
    }

}