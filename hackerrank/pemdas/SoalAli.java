
import java.util.Scanner;

public class SoalAli {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t--) {
            String namaKota = in.next();
            int jumlahHari = in.nextInt();
            double rataAns;
            String type = "";
            double[] suhuMaks = new double[jumlahHari];
            double[] suhuMin = new double[jumlahHari];
            double[] suhuHarian = new double[jumlahHari];
            double selisih = 0;
            for (int i = 0; i < jumlahHari; i++) {
                suhuMaks[i] = in.nextDouble();
                suhuMin[i] = in.nextDouble();
                double tempSelisih = Math.abs(suhuMaks[i], suhuMin[i]);
                if (tempSelisih > selisih) {
                    selisih = tempSelisih;
                }
                suhuHarian[i] = (double) (suhuMaks[i]+suhuMin[i])/2;
            }

            int ovr=0;
            for (int i = 0; i < jumlahHari; i++){
                ovr+=suhuHarian[i];
            }

            rataAns = ovr/jumlahHari;
            if (rataAns >= 35) {
                type = "Panas";
            }else if (rataAns >= 25) {
                type = "Normal";
            }else if (rataAns >= 15) {
                type = "Sejuk";
            }else if (rataAns < 15) {
                type = "Dingin";
            }

            System.out.printf("%s %.2f %.2f %s", namaKota, rataAns, selisih, type);

        } 


    }


}
