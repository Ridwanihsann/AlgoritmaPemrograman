import java.util.Scanner;

public class kelolaAnggaran {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("\nMasukkan total anggaran bulanan Anda: ");
        double anggaran = input.nextDouble();
        System.out.print("Masukkan jumlah pengeluaran bulanan Anda: ");
        double pengeluaran = input.nextDouble();
        double sisaAnggaran = anggaran - pengeluaran;
        System.out.println("Sisa anggaran bulanan Anda: " + sisaAnggaran);
        input.close();
    }
}

