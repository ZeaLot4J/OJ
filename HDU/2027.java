import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "";
        int n, num1, num2, num3, num4, num5;
        n = num1 = num2 = num3 = num4 = num5 = 0;
        char[] chs = null;
        while (scan.hasNext()) {
            n = scan.nextInt();
            scan.nextLine();
            for (int i = 0; i < n; i++) {
                str = scan.nextLine();
                chs = str.toCharArray();
                for (int j = 0; j < chs.length; j++) {
                    switch (chs[j]) {
                    case 'a':
                        num1++;
                        break;
                    case 'e':
                        num2++;
                        break;
                    case 'i':
                        num3++;
                        break;
                    case 'o':
                        num4++;
                        break;
                    case 'u':
                        num5++;
                        break;
                    default:
                        break;
                    }
                }
                System.out.println("a:"+num1);
                System.out.println("e:"+num2);
                System.out.println("i:"+num3);
                System.out.println("o:"+num4);
                System.out.println("u:"+num5);
                if(i!=n-1)
                    System.out.println();
                num1 = num2 = num3 = num4 = num5 = 0;
            }

        }
    }

}