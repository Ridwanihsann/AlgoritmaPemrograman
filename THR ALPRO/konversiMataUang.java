import java.text.DecimalFormat;
import java.util.Scanner;

public class konversiMataUang {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat formatter = new DecimalFormat("#,###");

        System.out.print("Masukkan jumlah mata uang yang ingin dikonversi: ");
        int jumlah = input.nextInt();

        double[] usdArray = new double[jumlah];
        double[] kursArray = new double[jumlah];

        for (int i = 0; i < jumlah; i++) {
            System.out.print("Masukkan jumlah uang ke-" + (i+1) + " dalam USD: ");
            usdArray[i] = input.nextDouble();
            System.out.print("Masukkan kurs mata uang saat ini untuk ke-" + (i+1) + " (saat ini: 15839): ");
            kursArray[i] = input.nextDouble();
        }

        System.out.println("Hasil konversi:");

        for (int i = 0; i < jumlah; i++) {
            double idr = usdArray[i] * kursArray[i];
            System.out.println("Uang ke-" + (i+1) + " setelah dikonversi ke IDR: Rp. " + formatter.format(idr));
        }

        input.close();
    }
}
