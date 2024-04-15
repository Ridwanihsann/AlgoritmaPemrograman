import java.util.Scanner;

public class hitunganPembayaran {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan total tagihan: ");
        double total = input.nextDouble();
        System.out.print("Masukkan jumlah orang: ");
        int jumlahOrang = input.nextInt();
        double pembagian = total / jumlahOrang;
        System.out.println("Jumlah pembagian per orang: " + pembagian);
        input.close();
    } 
}

