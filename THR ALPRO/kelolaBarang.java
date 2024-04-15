import java.util.Scanner;

public class kelolaBarang {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan jumlah barang dalam inventaris: ");
        int jumlahBarang = input.nextInt();

        String[] namaBarang = new String[jumlahBarang];
        int[] stokBarang = new int[jumlahBarang];

        // Mengisi informasi barang
        for (int i = 0; i < jumlahBarang; i++) {
            System.out.print("Masukkan nama barang ke-" + (i + 1) + ": ");
            namaBarang[i] = input.next();

            System.out.print("Masukkan stok barang ke-" + (i + 1) + ": ");
            stokBarang[i] = input.nextInt();
        }

        // Menampilkan informasi awal inventaris
        System.out.println("\nInventaris Barang:");
        for (int i = 0; i < jumlahBarang; i++) {
            System.out.println((i + 1) + ". " + namaBarang[i] + " - Stok: " + stokBarang[i]);
        }

        // Melakukan pembaruan stok barang
        System.out.print("\nApakah ada pembaruan stok? (ya/tidak): ");
        String jawaban = input.next();

        if (jawaban.equalsIgnoreCase("ya")) {
            System.out.print("Masukkan nomor barang yang akan diperbarui: ");
            int nomorBarang = input.nextInt();

            if (nomorBarang >= 1 && nomorBarang <= jumlahBarang) {
                System.out.print("Masukkan jumlah stok baru: ");
                int stokBaru = input.nextInt();

                // Memperbarui stok barang
                stokBarang[nomorBarang - 1] = stokBaru;

                // Menampilkan informasi setelah pembaruan
                System.out.println("\nInventaris Barang Setelah Pembaruan:");
                for (int i = 0; i < jumlahBarang; i++) {
                    System.out.println((i + 1) + ". " + namaBarang[i] + " - Stok: " + stokBarang[i]);
                }
            } else {
                System.out.println("Nomor barang tidak valid.");
            }
        } else {
            System.out.println("Terima kasih. Tidak ada pembaruan stok.");
        }
    }
}
