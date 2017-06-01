import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        int n = 0, r = 0, result = 0;
        boolean flag = false;
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()){
            n = scanner.nextInt();
            r = scanner.nextInt();
            if(n<0){
                flag = true;
                n = -n;
            }
            Stack<Integer> stac = new Stack<Integer>();
            while(n!=0){
                stac.push(n%r);
                n /= r;
            }
            if(flag==true) 
                System.out.print("-");
            while(!stac.isEmpty()){
                result = stac.pop();
                switch(result){
                case 10: System.out.print("A"); break;
                case 11: System.out.print("B"); break;
                case 12: System.out.print("C"); break;
                case 13: System.out.print("D"); break;
                case 14: System.out.print("E"); break;
                case 15: System.out.print("F"); break;
                default: System.out.print(result); break;
                }
            }
            System.out.println();
            flag = false;
        }
    }

}