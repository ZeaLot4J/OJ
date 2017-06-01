import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int score = 0;
        while(scan.hasNextInt()){
            score = scan.nextInt();
            if(score>=90&&score<=100)
                System.out.println("A");
            else if(score>=80&&score<=89)
                System.out.println("B");
            else if(score>=70&&score<=79)
                System.out.println("C");
            else if(score>=60&&score<=69)
                System.out.println("D");
            else if(score>=0&&score<=59)
                System.out.println("E");
            else 
                System.out.println("Score is error!");
        }
    }

}