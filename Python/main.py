# import class baju dari file baju
from Baju import Baju
import os  # buat ngejalanin perintah clear screen

# fungsi buat ngitung panjang maksimum tiap kolom biar tabelnya rapi
def hitung_panjang_maksimum(list_baju):
    panjang = [
        len("ID"), len("Nama"), len("Harga"), len("Stok"),
        len("Jenis"), len("Bahan"), len("Warna"),
        len("Untuk"), len("Size"), len("Merk")
    ]

    # cek tiap data baju buat nyesuain panjang maksimum
    for b in list_baju:
        panjang[0] = max(panjang[0], len(b.get_id()))
        panjang[1] = max(panjang[1], len(b.get_nama()))
        panjang[2] = max(panjang[2], len(str(b.get_harga())))
        panjang[3] = max(panjang[3], len(str(b.get_stok())))
        panjang[4] = max(panjang[4], len(b.get_jenis()))
        panjang[5] = max(panjang[5], len(b.get_bahan()))
        panjang[6] = max(panjang[6], len(b.get_warna()))
        panjang[7] = max(panjang[7], len(b.get_untuk()))
        panjang[8] = max(panjang[8], len(b.get_size()))
        panjang[9] = max(panjang[9], len(b.get_merk()))

    return panjang

# fungsi buat nampilin header tabel
def tampilkan_header(panjang):
    header = ["ID", "Nama", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"]
    
    print("|", end="")
    for i in range(len(header)):
        print(f" {header[i]}", end="")
        for j in range(panjang[i] - len(header[i])):
            print(" ", end="")
        print(" |", end="")
    print()


# fungsi buat nampilin garis pemisah di tabel
def tampilkan_pembatas(panjang):
    print("+", end="")
    for i in range(len(panjang)):
        print("-" * (panjang[i] + 2), end="+")
    print()

# fungsi buat nampilin data baju dalam format tabel
def tampilkan_data(list_baju, panjang):
    for b in list_baju:
        print("|", end="")
        data = [
            str(b.get_id()), str(b.get_nama()), str(b.get_harga()), str(b.get_stok()),
            str(b.get_jenis()), str(b.get_bahan()), str(b.get_warna()), str(b.get_untuk()),
            str(b.get_size()), str(b.get_merk())
        ]
        for i in range(len(data)):
            print(f" {data[i]}", end="")  # cetak teks dulu
            for j in range(panjang[i] - len(data[i])):  # tambahin spasi manual
                print(" ", end="")
            print(" |", end="")  # akhir dari kolom
        print()  # pindah baris

# fungsi utama buat nampilin menu dan ngelola data
def main():
    # daftar baju awal
    list_baju = [
        Baju("B001", "Kaos_Polos", 120000, 50, "Pakaian", "Katun", "Hitam", "Anjing", "L", "Nike"),
        Baju("B002", "Jaket_Hoodie", 250000, 30, "Pakaian", "Fleece", "Abu-abu", "Kucing", "XL", "Adidas"),
        Baju("B003", "Kemeja_Formal", 300000, 20, "Pakaian", "Linen", "Putih", "Anjing", "M", "Zara"),
        Baju("B004", "Blouse_Casual", 180000, 40, "Pakaian", "Sifon", "Merah", "Kucing", "S", "H&M"),
        Baju("A001", "Kalung", 350000, 25, "Aksesoris", "Kulit", "Biru", "-", "-", "-")
    ]

    while True:
        os.system('cls')  # clear screen buat tampilan lebih bersih

        # hitung panjang maksimum tiap kolom
        panjang = hitung_panjang_maksimum(list_baju)

        # tampilin tabel
        tampilkan_pembatas(panjang)
        tampilkan_header(panjang)
        tampilkan_pembatas(panjang)
        tampilkan_data(list_baju, panjang)
        tampilkan_pembatas(panjang)

        # tampilin menu
        print("\n=== MENU ===")
        print("1. Tambah Data Baju")
        print("2. Keluar")
        pilihan = input("Pilihan Anda: ")

        if pilihan == '1':
            # input data baru
            id = input("ID: ")
            nama = input("Nama: ")
            harga = int(input("Harga: "))
            stok = int(input("Stok: "))
            jenis = input("Jenis: ")
            bahan = input("Bahan: ")
            warna = input("Warna: ")
            untuk = input("Untuk: ")
            size = input("Size: ")
            merk = input("Merk: ")

            # masukin data baru ke list
            list_baju.append(Baju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk))
            print("\nproduct sukses ditambahkan!")

            # tampilin tabel yang udah diperbarui
            panjang = hitung_panjang_maksimum(list_baju)
            tampilkan_pembatas(panjang)
            tampilkan_header(panjang)
            tampilkan_pembatas(panjang)
            tampilkan_data(list_baju, panjang)
            tampilkan_pembatas(panjang)

        elif pilihan == '2':
            # keluar dari program
            print("terima kasih telah menggunakan program ini!")
            break
        else:
            # kalau input ga valid
            print("pilihan tidak valid! silakan pilih 1 atau 2.")
    
        input("\ntekan enter untuk kembali ke menu...")

# cek apakah file ini dijalankan langsung
if __name__ == "__main__":
    main()
