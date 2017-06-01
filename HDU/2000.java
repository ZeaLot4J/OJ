import java.util.Arrays;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "";
        char[] chars = null;
        while(scan.hasNext()){
            str = scan.next();
            chars = str.toCharArray();
            Arrays.sort(chars);
            System.out.println(chars[0]+" "+chars[1]+" "+chars[2]);
        }
    }

}