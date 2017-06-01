import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, ival = 0;
        int[] ia = null;
        while(scan.hasNext()){
            n = scan.nextInt();
            if(n==0) break;
            ia = new int[n];
            for(int i=0; i<n; i++){
                ia[i] = scan.nextInt();
            }
            for(int i=0, max=0; i<n-1; i++){
                max = i;
                for(int j=i+1; j<n; j++){
                    if(Math.abs(ia[j])>Math.abs(ia[max])) max = j;
                }
                if(max!=i){
                    int tmp = ia[max];
                    ia[max] = ia[i];
                    ia[i] = tmp;                    
                }
            }
            System.out.print(ia[0]);
            for(int i=1; i<ia.length; i++){
                System.out.print(" "+ia[i]);
            }
            System.out.println();
        }
    }
}