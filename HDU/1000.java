import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a=0,b=0;
        while(scanner.hasNext()){
            a=scanner.nextInt();
            b=scanner.nextInt();
            System.out.println(a+b);
        }
    }
}