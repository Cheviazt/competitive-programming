import java.util.Scanner;

public class NumberOfGoodPairs {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            int isi = sc.nextInt();
            arr[i] = isi;
        }

        int sum = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    sum++;
                }
            }
        }
        sc.close();

        System.out.println(sum);

    }



}
