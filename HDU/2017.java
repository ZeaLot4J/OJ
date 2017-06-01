import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0;
        String strs = null;
        char[] chs = null;
        int cnt = 0;
        while(scan.hasNext()){
            n = scan.nextInt();
            for(int i=0; i<n; i++){
                strs = scan.next();
                chs = strs.toCharArray();
                for(int j=0; j<chs.length; j++){
                    if(Character.isDigit(chs[j]))
                        cnt++;
                }
                System.out.println(cnt);
                cnt = 0;
            }
        }
    }

}