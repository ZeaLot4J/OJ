import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n=0, pcnt=0, ncnt=0, zcnt=0;
        double dval=0;
        while(scan.hasNext()){
            n = scan.nextInt();
            if(n==0) break;
            for(int i=0; i<n; i++){
                dval = scan.nextDouble();
                if(dval>0) pcnt++;
                else if(dval<0) ncnt++;
                else zcnt++;
            }
            System.out.println(ncnt+" "+zcnt+" "+pcnt);
            ncnt = 0;
            zcnt = 0;
            pcnt = 0;
        }
    }

}