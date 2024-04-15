import java.util.Scanner;

public class menghitungKeuntunganInvestasi {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Berapakali anda investasi? : ");
        int jumlahInvestasi = input.nextInt();
        double[] investasi = new double[jumlahInvestasi];
        System.out.print("Masukkan persentase keuntungan investasi (%) : ");
        double tingkatPengembalian = input.nextDouble() / 100;

        for (int i = 0; i < jumlahInvestasi; i++) {
            System.out.print("Investasi ke-" + (i + 1) + ": ");
            investasi[i] = input.nextDouble();
        }

        double totalKeuntungan = 0;
        for (double nilai : investasi) {
            totalKeuntungan += nilai * tingkatPengembalian;
        }

        System.out.println("Total keuntungan dari investasi anda adalah: " + totalKeuntungan);
         
        System.out.println("Terima kasih!");
        input.close();
    }
}

