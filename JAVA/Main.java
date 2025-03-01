import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        ArrayList<Baju> produk = new ArrayList<Baju>();

        // Menambahkan produk default
        Baju baju = new Baju(1, "Kaos", 50000, 10, "Kaos", "Katun", "Putih", "Pria", "M", "Gucci");
        produk.add(baju);
        baju = new Baju(2, "Kemeja", 100000, 5, "Kemeja", "Katun", "Biru", "Pria", "L", "Zara");
        produk.add(baju);
        baju = new Baju(3, "Dress", 150000, 3, "Dress", "Sifon", "Merah", "Wanita", "M", "H&M");
        produk.add(baju);
        baju = new Baju(4, "Jaket", 200000, 2, "Jaket", "Kulit", "Hitam", "Pria", "L", "Adidas");
        produk.add(baju);
        baju = new Baju(5, "Blouse", 75000, 7, "Blouse", "Katun", "Putih", "Wanita", "M", "Gucci");
        produk.add(baju);

        // Input dari user
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(); // Jumlah produk yang akan ditambahkan
        for (int i = 0; i < n; i++) {
            int id = input.nextInt();
            String namaProduk = input.next();
            int hargaProduk = input.nextInt();
            int stokProduk = input.nextInt();
            String jenis = input.next();
            String bahan = input.next();
            String warna = input.next();
            String untuk = input.next();
            String size = input.next();
            String merk = input.next();
            Baju baju1 = new Baju(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna, untuk, size, merk);
            produk.add(baju1);
        }

        // Menentukan panjang maksimal untuk setiap atribut
        int panjangId = 2;
        int panjangNamaProduk = 4;
        int panjangHargaProduk = 5;
        int panjangStokProduk = 4;
        int panjangJenis = 5;
        int panjangBahan = 5;
        int panjangWarna = 5;
        int panjangUntuk = 5;
        int panjangSize = 4;
        int panjangMerk = 4;

        // Menghitung panjang maksimal dari setiap atribut
        for (int i = 0; i < produk.size(); i++) {
            panjangId = Math.max(panjangId, String.valueOf(produk.get(i).getId()).length());
            panjangNamaProduk = Math.max(panjangNamaProduk, produk.get(i).getNamaProduk().length());
            panjangHargaProduk = Math.max(panjangHargaProduk, String.valueOf(produk.get(i).getHargaProduk()).length());
            panjangStokProduk = Math.max(panjangStokProduk, String.valueOf(produk.get(i).getStokProduk()).length());
            panjangJenis = Math.max(panjangJenis, produk.get(i).getJenis().length());
            panjangBahan = Math.max(panjangBahan, produk.get(i).getBahan().length());
            panjangWarna = Math.max(panjangWarna, produk.get(i).getWarna().length());
            panjangUntuk = Math.max(panjangUntuk, produk.get(i).getUntuk().length());
            panjangSize = Math.max(panjangSize, produk.get(i).getSize().length());
            panjangMerk = Math.max(panjangMerk, produk.get(i).getMerk().length());
        }

        // atasnya
        System.out.print("+");
        for (int i = 0; i < panjangId + 1; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangNamaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangHargaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangStokProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangJenis + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangBahan + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangWarna + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangUntuk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangSize + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangMerk + 2; i++) {
            System.out.print("-");
        }
        System.out.println("+");

        // Menampilkan header tabel
        System.out.printf("|%-" + panjangId + "s | %-" + panjangNamaProduk + "s | %-" + panjangHargaProduk + "s | %-"
                + panjangStokProduk + "s | %-" + panjangJenis + "s | %-" + panjangBahan + "s | %-" + panjangWarna
                + "s | %-" + panjangUntuk + "s | %-" + panjangSize + "s | %-" + panjangMerk + "s |%n",
                "ID", "Nama", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk");
        System.out.print("+");
        for (int i = 0; i < panjangId + 1; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangNamaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangHargaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangStokProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangJenis + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangBahan + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangWarna + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangUntuk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangSize + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangMerk + 2; i++) {
            System.out.print("-");
        }
        System.out.println("+");
        // Menampilkan data produk
        for (int i = 0; i < produk.size(); i++) {
            System.out.printf(
                    "|%-" + panjangId + "d | %-" + panjangNamaProduk + "s | %-" + panjangHargaProduk + "d | %-"
                            + panjangStokProduk + "d | %-" + panjangJenis + "s | %-" + panjangBahan + "s | %-"
                            + panjangWarna + "s | %-" + panjangUntuk + "s | %-" + panjangSize + "s | %-" + panjangMerk
                            + "s |%n",
                    produk.get(i).getId(), produk.get(i).getNamaProduk(), produk.get(i).getHargaProduk(),
                    produk.get(i).getStokProduk(), produk.get(i).getJenis(), produk.get(i).getBahan(),
                    produk.get(i).getWarna(), produk.get(i).getUntuk(), produk.get(i).getSize(),
                    produk.get(i).getMerk());
        }

        System.out.print("+");
        for (int i = 0; i < panjangId + 1; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangNamaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangHargaProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangStokProduk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangJenis + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangBahan + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangWarna + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangUntuk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangSize + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangMerk + 2; i++) {
            System.out.print("-");
        }
        System.out.println("+");
    }

}
