import java.util.Scanner;

public class membandingkanHarga {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan harga produk di toko A: ");
        double hargaA = input.nextDouble();
        System.out.print("Masukkan harga produk di toko B: ");
        double hargaB = input.nextDouble();
        String tokoMurah = (hargaA < hargaB) ? "Toko A" : "Toko B";
        System.out.println("Harga lebih murah di " + tokoMurah);
        input.close();
    }
}
