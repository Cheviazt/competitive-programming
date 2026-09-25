import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class HappyNumber {

    public static int cekHappy (int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        Set<Integer> bilanganHappy = new HashSet<>();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        while (n != 1) {
            if (bilanganHappy.contains(n)) {
                System.out.println("Tidak happy");
                n = 1;
                break;
            }
            bilanganHappy.add(n);
            n = cekHappy(n);
        }
        System.out.println("Happy");
        scan.close();
    }


}
