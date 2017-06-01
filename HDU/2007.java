import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int m=0, n=0, oddRes=0, evenRes=0;
        while(scan.hasNext()){
            n = scan.nextInt();
            m = scan.nextInt();
            if(n>m){
                int tmp = n;
                n = m;
                m = tmp;
            }
            for(int i=n; i<=m; i++){
                if(i%2==0) evenRes += i*i;
                else oddRes += i*i*i;
            }
            System.out.println(evenRes+" "+oddRes);
            evenRes = 0;
            oddRes = 0;
        }
    }

}