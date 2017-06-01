import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n=0, result=1, ival=0;
        while(scan.hasNext()){
            n = scan.nextInt();
            for(int i=0; i<n; i++){
                ival = scan.nextInt();
                if(ival%2==1){
                    result *= ival;
                }
            }
            System.out.println(result);
            result = 1;
        }
    }

}