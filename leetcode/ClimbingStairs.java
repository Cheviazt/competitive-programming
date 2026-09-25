import java.util.Scanner;

public class ClimbingStairs {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int a,b,sum;
        a = 2;
        b = 3;
        sum = 0;

        if (n <= 3) {
            System.out.println(n);
        } else {
            for (int i = 0; i < n-3; i++) {
                sum = a + b;
                a = b;
                b = sum;
            }
            System.out.println(sum);
        }

    }

}