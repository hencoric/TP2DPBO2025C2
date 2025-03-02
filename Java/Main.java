import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // bikin list buat nyimpen data baju
        ArrayList<Baju> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        // variabel buat input data baru
        String id, nama_produk, jenis, bahan, warna, untuk, size, merk;
        int harga_produk, stok_produk;
        char pilihan;

        // masukin beberapa data awal biar ga kosong pas program jalan
        list.add(new Baju("B001", "Kaos_Polos", 120000, 50, "Pakaian", "Katun", "Hitam", "Anjing", "L", "Nike"));
        list.add(new Baju("B002", "Jaket_Hoodie", 250000, 30, "Pakaian", "Fleece", "Abu-abu", "Kucing", "XL", "Adidas"));
        list.add(new Baju("B003", "Kemeja_Formal", 300000, 20, "Pakaian", "Linen", "Putih", "Anjing", "M", "Zara"));
        list.add(new Baju("B004", "Blouse_Casual", 180000, 40, "Pakaian", "Sifon", "Merah", "Kucing", "S", "H&M"));
        list.add(new Baju("A001", "Kalung", 350000, 25, "Aksesoris", "Kulit", "Biru", "-", "-", "-"));

        while (true) {
            // hitung panjang maksimal buat tiap kolom biar tabel rapi
            ArrayList<Integer> panjang = hitungPanjangMaksimum(list);

            // tampilin tabel produk
            tampilkanPembatas(panjang);
            tampilkanHeader(panjang);
            tampilkanPembatas(panjang);
            tampilkanData(list, panjang);
            tampilkanPembatas(panjang);

            // menu utama
            System.out.println("\n=== MENU ===");
            System.out.println("1. Tambah Data Baju");
            System.out.println("2. Keluar");
            System.out.print("Pilihan anda: ");
            pilihan = scanner.next().charAt(0);

            if (pilihan == '1') {
                scanner.nextLine(); // buat ngilangin newline biar input selanjutnya bener

                // input data baru
                System.out.println("\n==== Tambah Produk Baru ====");
                System.out.print("ID: ");
                id = scanner.nextLine();
                System.out.print("Nama: ");
                nama_produk = scanner.nextLine();
                System.out.print("Harga: ");
                harga_produk = scanner.nextInt();
                System.out.print("Stok: ");
                stok_produk = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Kategori: ");
                jenis = scanner.nextLine();
                System.out.print("Bahan: ");
                bahan = scanner.nextLine();
                System.out.print("Warna: ");
                warna = scanner.nextLine();
                System.out.print("Untuk: ");
                untuk = scanner.nextLine();
                System.out.print("Size: ");
                size = scanner.nextLine();
                System.out.print("Merk: ");
                merk = scanner.nextLine();

                // masukin ke list
                list.add(new Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk));

                System.out.println("\nProduk sukses ditambahkan!");

                // tampilin tabel lagi biar keliatan perubahan
                panjang = hitungPanjangMaksimum(list);
                tampilkanPembatas(panjang);
                tampilkanHeader(panjang);
                tampilkanPembatas(panjang);
                tampilkanData(list, panjang);
                tampilkanPembatas(panjang);
            } else if (pilihan == '2') {
                System.out.println("Terima kasih telah menggunakan program ini!");
                break;
            } else {
                System.out.println("Pilihan tidak valid! silakan pilih 1 atau 2.");
            }

            System.out.print("\nTekan enter untuk kembali ke menu...");
            scanner.nextLine(); // biar user harus pencet enter buat lanjut
        }

        scanner.close();
    }

    // fungsi buat hitung panjang maksimal tiap kolom biar tabel rapi
    public static ArrayList<Integer> hitungPanjangMaksimum(ArrayList<Baju> list) {
        ArrayList<Integer> panjang = new ArrayList<>();
        String[] headers = { "ID", "Nama", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk" };

        // set panjang awal sesuai panjang header
        for (String header : headers) {
            panjang.add(header.length());
        }

        // cek data di list, update panjang maksimal kalo ada yang lebih panjang
        for (Baju b : list) {
            panjang.set(0, Math.max(panjang.get(0), b.getId().length()));
            panjang.set(1, Math.max(panjang.get(1), b.getNama().length()));
            panjang.set(2, Math.max(panjang.get(2), String.valueOf(b.getHarga()).length()));
            panjang.set(3, Math.max(panjang.get(3), String.valueOf(b.getStok()).length()));
            panjang.set(4, Math.max(panjang.get(4), b.getJenis().length()));
            panjang.set(5, Math.max(panjang.get(5), b.getBahan().length()));
            panjang.set(6, Math.max(panjang.get(6), b.getWarna().length()));
            panjang.set(7, Math.max(panjang.get(7), b.getUntuk().length()));
            panjang.set(8, Math.max(panjang.get(8), b.getSize().length()));
            panjang.set(9, Math.max(panjang.get(9), b.getMerk().length()));
        }

        return panjang;
    }

    // fungsi buat nampilin header tabel
    public static void tampilkanHeader(ArrayList<Integer> panjang) {
        String[] headers = { "ID", "Nama", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk" };
        System.out.print("|");
        for (int i = 0; i < headers.length; i++) {
            System.out.print(" " + headers[i]);
            for (int j = 0; j < panjang.get(i) - headers[i].length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" |");
        }
        System.out.println();
    }

    public static void tampilkanPembatas(ArrayList<Integer> panjang) {
        System.out.print("+");
        for (int i = 0; i < panjang.size(); i++) {
            for (int j = 0; j < panjang.get(i) + 2; j++) {
                System.out.print("-");
            }
            System.out.print("+");
        }
        System.out.println();
    }

    // fungsi buat nampilin data produk dalam bentuk tabel
    public static void tampilkanData(ArrayList<Baju> list, ArrayList<Integer> panjang) {
        for (Baju b : list) {
            System.out.print("|");

            String[] data = {
                    b.getId(), b.getNama(), String.valueOf(b.getHarga()), String.valueOf(b.getStok()),
                    b.getJenis(), b.getBahan(), b.getWarna(), b.getUntuk(), b.getSize(), b.getMerk()
            };

            for (int i = 0; i < data.length; i++) {
                System.out.print(" " + data[i]);
                for (int j = 0; j < panjang.get(i) - data[i].length(); j++) {
                    System.out.print(" ");
                }
                System.out.print(" |");
            }
            System.out.println();
        }
    }
}
