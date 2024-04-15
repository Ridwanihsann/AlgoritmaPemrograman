import java.util.Scanner;

public class kalkulatorBangunDatar {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        //Perhitungan luas bangun datar PERSEGI
        System.out.println("=====Luas Persegi !=====\n");
        
        //Masukan panjang sisi persegi
        System.out.print("Masukkan panjang sisi persegi : ");
        double sisi = input.nextDouble();
        
        //Menghitung menggunakan if else dengan rumus luas persegi :  L = s x s
        if (sisi <= 0) {
            System.out.println("Panjang sisi harus lebih dari 0.");
        } else {
            double luas = sisi * sisi;
            System.out.println("Luas persegi = " + luas);
        }
        

        //Perhitungan luas bangun datar SEGITIGA
        System.out.println("\n\n=====Luas Segitiga !=====\n");
        
        //Masukan panjang alas segitiga
        System.out.print("Masukkan panjang alas segitiga : ");
        double alas = input.nextDouble();
        
        //Masukan tinggi segitiga
        System.out.print("Masukkan tinggi segitiga : ");
        double tinggi = input.nextDouble();
        
        //Menghitung menggunakan if else dengan rumus luas segitiga : L = 1/2 x a x t
        if (alas <= 0 || tinggi <= 0) {
            System.out.println("Alas dan tinggi harus lebih dari 0.");
        } else {
            double luas = 0.5 * alas * tinggi;
            System.out.println("Luas segitiga = " + luas);
        }


        //Perhitungan luas bangun datar LINGKARAN
        System.out.println("\n\n=====Luas Lingkaran !=====\n");

        //Masukan jari-jari lingkaran
        System.out.print("Masukkan jari-jari lingkaran : ");
        double jariJari = input.nextDouble();

        //Menghitung menggunakan if else dengan rumus luas lingkaran : L = π × r × r
        if (jariJari <= 0) {
            System.out.println("Jari-jari harus lebih dari 0.");
        } else {
            double luas = Math.PI * jariJari * jariJari;
            System.out.println("Luas lingkaran = " + luas);
        }

        System.out.println("\n");
        input.close();
    }
}
