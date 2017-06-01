import java.util.ArrayList;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int m = 0, n = 0;
        ArrayList<Integer> al = new ArrayList<Integer>();
        while(scan.hasNext()){
            m = scan.nextInt();
            n = scan.nextInt();
            for(int i=m; i<=n; i++){
                if(Math.pow(i/100,3)+Math.pow(i%10, 3)+Math.pow(i/10%10, 3)==i)
                    al.add(i);
            }
            if(al.isEmpty()) System.out.println("no");
            else{
                System.out.print(al.get(0));
                for(int i=1,len=al.size(); i<len; i++){
                    System.out.print(" "+al.get(i));
                }
                System.out.println();
            }
            al.clear();
        }
    }
}