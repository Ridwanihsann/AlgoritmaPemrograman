import java.util.Scanner;

public class kalkulatorMenghitungPajak {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        char ulangi;
        do {
            System.out.print("\nMasukkan penghasilan (dalam Rp): ");
            double penghasilan = input.nextDouble();
            double pajak = 0;

            if (penghasilan <= 50000000) {
                pajak = penghasilan * 0.05;
            } else if (penghasilan <= 100000000) {
                pajak = 2500000 + (penghasilan - 50000000) * 0.1;
            } else {
                pajak = 7500000 + (penghasilan - 100000000) * 0.15;
            }

            System.out.println("Total pajak yang harus dibayar: Rp" + pajak);

            System.out.print("Apakah Anda ingin menghitung pajak lagi? (Y/N): ");
            ulangi = input.next().charAt(0);
        } while (ulangi == 'y' || ulangi == 'Y');

        System.out.println("Terima kasih!\n");
        input.close();
    }
}
