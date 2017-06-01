import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "";
        char[] chs = null;
        int n = 0, flag = 1;
        while (scan.hasNext()) {
            n = scan.nextInt();
            scan.nextLine();
            for (int k = 0; k < n; k++) {
                str = scan.next();
                chs = str.toCharArray();
                for (int i = 0, j = chs.length - 1; i <= j; i++, j--) {
                    if (chs[i] != chs[j])
                        flag = 0;
                }
                if (flag == 0)
                    System.out.println("no");
                else System.out.println("yes");
                flag = 1;
            }
        }
    }

}