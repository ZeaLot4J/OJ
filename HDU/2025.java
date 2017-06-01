import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        char[] chs = null;
        String str = "";
        int max = 0;
        char cmax = 'A';
        while(scan.hasNext()){
            str = scan.nextLine();
            chs = str.toCharArray();
            for(int i=0; i<chs.length; i++){
                if(chs[max]<chs[i]) max = i;
            }
            cmax = chs[max];
            for(int i=0; i<chs.length; i++){
                System.out.print(chs[i]);
                if(cmax==chs[i]){
                    System.out.print("(max)");
                }
            }
            System.out.println();
            max = 0;
            cmax = 'A';
        }
    }

}