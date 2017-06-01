import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "";
        char[] chs = null;
        while(scan.hasNext()){
            str = scan.nextLine();
            chs = str.toCharArray();
            chs[0] -= 32;
            for(int i=1; i<chs.length; i++){
                if(chs[i]==' '){
                    chs[i+1] -= 32;
                }
            }
            for(char c:chs){
                System.out.print(c);
            }
            System.out.println();
        }
    }

}