import java.util.Scanner;

public class catatanPengeluaran {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        char ulangi;
        do {
            System.out.print("\nMasukkan jumlah transaksi pengeluaran: ");
            int jumlahTransaksi = input.nextInt();
            double[] pengeluaran = new double[jumlahTransaksi];

            for (int i = 0; i < jumlahTransaksi; i++) {
                System.out.print("Transaksi ke-" + (i + 1) + ": ");
                pengeluaran[i] = input.nextDouble();
            }

            System.out.print("Total pengeluaran: ");

            double total = 0;
            for (int i = 0; i < jumlahTransaksi; i++) {
                total += pengeluaran[i];
            }
            System.out.println(total);

            System.out.print("Apakah Anda ingin mencatat pengeluaran lagi? (y/n): ");
            ulangi = input.next().charAt(0);
        } while (ulangi == 'y' || ulangi == 'Y');

        System.out.println("Terima kasih!");
        input.close();
    }
}

