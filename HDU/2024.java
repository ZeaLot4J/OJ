import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "";
        String regex = "[a-zA-Z_][a-zA-Z0-9_]*";
        int n = 0;
        while(scan.hasNext()){
            n = scan.nextInt();
            scan.nextLine();
            for(int i=0; i<n; i++){
                str = scan.nextLine();
                if(str.matches(regex)){
                    System.out.println("yes");
                }else
                    System.out.println("no");
            }
        }
    }
}