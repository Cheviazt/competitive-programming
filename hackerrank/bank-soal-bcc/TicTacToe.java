
import java.util.Scanner;

public class TicTacToe {

    public static String[][] table = {
            {"0", "1", "2"},
            {"3", "4", "5"},
            {"6", "7", "8"}
    };

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        for (int i = 0; i < 3; i++ ) {
            for (int j = 0; j < 3; j++) {
                String a = in.next();
                table[i][j] = a;
            }
        }

        System.out.println(whoWin(table));

    }

    public static String whoWin (String[][] table) {

        String ans = "Draw";

        for (int i = 0; i < 3; i++) {

            if ((table[i][0].equals(table[i][1])) && (table[i][1].equals(table[i][2]))) {
                ans = table[i][i] + " Menang";
            }

            if ((table[0][i].equals(table[1][i])) && (table[1][i].equals(table[2][i]))) {
                ans = table[i][i] + " Menang";
            }

        }

        if (table[0][0].equals(table[1][1]) && table[1][1].equals(table[2][2])) {
            ans = table[0][0] + " Menang";
        }

        if (table[0][2].equals(table[1][1]) && table[1][1].equals(table[2][0])) {
            ans = table[0][2] + " Menang";
        }

        return ans;
    }

}