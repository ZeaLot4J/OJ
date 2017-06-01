import java.util.Calendar;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Calendar cal = Calendar.getInstance();
        int y=0, m=0, d=0;
        String str = "";
        String[] strs = null;
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext()){
            str = scan.next();
            strs = str.split("/");
            y = Integer.parseInt(strs[0]);
            m = Integer.parseInt(strs[1]);
            d = Integer.parseInt(strs[2]);
            cal.set(y, m-1, d);
            System.out.println(cal.get(Calendar.DAY_OF_YEAR));
        }
    }
}