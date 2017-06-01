import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0, cnt = 0;
        int[] money = { 100, 50, 10, 5, 2, 1 };
        int[] salary = null;
        while (scan.hasNext()) {
            n = scan.nextInt();
            if (n == 0)
                break;
            salary = new int[n];
            for (int i = 0; i < n; i++) {
                salary[i] = scan.nextInt();
            }
            for (int i = 0; i < n; i++) {
                while (salary[i] != 0) {
                    for (int j = 0; j < 6; j++) {
                        if (money[j] <= salary[i]) {
                            salary[i] -= money[j];
                            cnt++;
                            break;
                        }
                    }
                }
            }
            System.out.println(cnt);
            cnt = 0;
        }
    }
}