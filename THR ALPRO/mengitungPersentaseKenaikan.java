import java.util.Scanner;

public class mengitungPersentaseKenaikan {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        char ulangi;
        do {
            System.out.print("Masukkan harga awal: ");
            double hargaAwal = input.nextDouble();
            System.out.print("Masukkan harga baru: ");
            double hargaBaru = input.nextDouble();

            double kenaikanPersentase = ((hargaBaru - hargaAwal) / hargaAwal) * 100;
            System.out.println("Persentase kenaikan harga: " + kenaikanPersentase + "%");

            System.out.print("Apakah Anda ingin menghitung kenaikan harga lagi? (y/n): ");
            ulangi = input.next().charAt(0);
        } while (ulangi == 'y' || ulangi == 'Y');

        System.out.println("Terima kasih!");
        input.close();
    }
}

