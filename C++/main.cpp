#include "Baju.cpp"

using namespace std;

// fungsi buat cari panjang maksimum tiap kolom biar tabel rapi
vector<int> hitungPanjangMaksimum(vector<Baju> &list)
{
    vector<int> panjang(10, 0);
    panjang[0] = string("ID").length();
    panjang[1] = string("Nama").length();
    panjang[2] = string("Harga").length();
    panjang[3] = string("Stok").length();
    panjang[4] = string("Jenis").length();
    panjang[5] = string("Bahan").length();
    panjang[6] = string("Warna").length();
    panjang[7] = string("Untuk").length();
    panjang[8] = string("Size").length();
    panjang[9] = string("Merk").length();

    for (Baju &b : list)  // cek tiap data di list buat update panjang maksimum
    {
        panjang[0] = max(panjang[0], (int)b.get_id().length());
        panjang[1] = max(panjang[1], (int)b.get_nama().length());
        panjang[2] = max(panjang[2], (int)to_string(b.get_harga()).length());
        panjang[3] = max(panjang[3], (int)to_string(b.get_stok()).length());
        panjang[4] = max(panjang[4], (int)b.get_jenis().length());
        panjang[5] = max(panjang[5], (int)b.get_bahan().length());
        panjang[6] = max(panjang[6], (int)b.get_warna().length());
        panjang[7] = max(panjang[7], (int)b.get_untuk().length());
        panjang[8] = max(panjang[8], (int)b.get_size().length());
        panjang[9] = max(panjang[9], (int)b.get_merk().length());
    }

    return panjang;
}

// fungsi buat nampilin header tabel
void tampilkanHeader(vector<int> panjang)
{
    cout << "| ID";
    for (int i = 0; i < panjang[0] - 2; i++)
        cout << " ";
    cout << " | Nama";
    for (int i = 0; i < panjang[1] - 4; i++)
        cout << " ";
    cout << " | Harga";
    for (int i = 0; i < panjang[2] - 5; i++)
        cout << " ";
    cout << " | Stok";
    for (int i = 0; i < panjang[3] - 4; i++)
        cout << " ";
    cout << " | Jenis";
    for (int i = 0; i < panjang[4] - 5; i++)
        cout << " ";
    cout << " | Bahan";
    for (int i = 0; i < panjang[5] - 5; i++)
        cout << " ";
    cout << " | Warna";
    for (int i = 0; i < panjang[6] - 5; i++)
        cout << " ";
    cout << " | Untuk";
    for (int i = 0; i < panjang[7] - 5; i++)
        cout << " ";
    cout << " | Size";
    for (int i = 0; i < panjang[8] - 4; i++)
        cout << " ";
    cout << " | Merk";
    for (int i = 0; i < panjang[9] - 4; i++)
        cout << " ";
    cout << " |\n";
}

// fungsi buat nampilin garis pembatas tabel
void tampilkanPembatas(vector<int> panjang)
{
    cout << "+";
    for (int i = 0; i < panjang[0] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[1] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[2] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[3] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[4] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[5] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[6] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[7] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[8] + 2; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < panjang[9] + 2; i++)
        cout << "-";
    cout << "+\n";
}

void tampilkanData(vector<Baju> &list, vector<int> panjang)
{
    for (Baju &b : list)
    {
        cout << "| " << b.get_id();
        for (int i = 0; i < panjang[0] - b.get_id().length(); i++)
            cout << " ";
        cout << " | " << b.get_nama();
        for (int i = 0; i < panjang[1] - b.get_nama().length(); i++)
            cout << " ";
        cout << " | " << b.get_harga();
        for (int i = 0; i < panjang[2] - to_string(b.get_harga()).length(); i++)
            cout << " ";
        cout << " | " << b.get_stok();
        for (int i = 0; i < panjang[3] - to_string(b.get_stok()).length(); i++)
            cout << " ";
        cout << " | " << b.get_jenis();
        for (int i = 0; i < panjang[4] - b.get_jenis().length(); i++)
            cout << " ";
        cout << " | " << b.get_bahan();
        for (int i = 0; i < panjang[5] - b.get_bahan().length(); i++)
            cout << " ";
        cout << " | " << b.get_warna();
        for (int i = 0; i < panjang[6] - b.get_warna().length(); i++)
            cout << " ";
        cout << " | " << b.get_untuk();
        for (int i = 0; i < panjang[7] - b.get_untuk().length(); i++)
            cout << " ";
        cout << " | " << b.get_size();
        for (int i = 0; i < panjang[8] - b.get_size().length(); i++)
            cout << " ";
        cout << " | " << b.get_merk();
        for (int i = 0; i < panjang[9] - b.get_merk().length(); i++)
            cout << " ";
        cout << " |\n";
    }
}

int main()
{
    vector<Baju> list;
    string id, nama_produk, jenis, bahan, warna, untuk, size, merk;
    int harga_produk, stok_produk;
    char pilihan;

    list.push_back(Baju("B001", "Kaos_Polos", 120000, 50, "Pakainan", "Katun", "Hitam", "Anjing", "L", "Nike"));
    list.push_back(Baju("B002", "Jaket_Hoodie", 250000, 30, "Pakaian", "Fleece", "Abu-abu", "Kucing", "XL", "Adidas"));
    list.push_back(Baju("B003", "Kemeja_Formal", 300000, 20, "Pakaian", "Linen", "Putih", "Anjing", "M", "Zara"));
    list.push_back(Baju("B004", "Blouse_Casual", 180000, 40, "Pakaian", "Sifon", "Merah", "Kucing", "S", "H&M"));
    list.push_back(Baju("B005", "Celana_Jeans", 350000, 25, "Aksesoris", "Denim", "Biru", "Anjing", "32", "Levi's"));

    while (true) // looping menu utama
    {
        system("cls");

        vector<int> panjang = hitungPanjangMaksimum(list);

        // print tabel yang sudah menyesuaikan lebar
        tampilkanPembatas(panjang);
        tampilkanHeader(panjang);
        tampilkanPembatas(panjang);
        tampilkanData(list, panjang);
        tampilkanPembatas(panjang);

        cout << "\n=== MENU ===\n";
        cout << "1. Tambah Data Baju\n";
        cout << "2. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == '1')
        {
            cout << "\n==== ADD PRODUCT BARU ====\n";

            cout << "ID: ";
            cin >> id;
            cout << "Nama: ";
            cin >> nama_produk;
            cout << "Harga: ";
            cin >> harga_produk;
            cout << "Stok: ";
            cin >> stok_produk;
            cout << "Kategori: ";
            cin >> jenis;
            cout << "Bahan: ";
            cin >> bahan;
            cout << "Warna: ";
            cin >> warna;
            cout << "Untuk: ";
            cin >> untuk;
            cout << "Size: ";
            cin >> size;
            cout << "Merk: ";
            cin >> merk;

            list.push_back(Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk));

            cout << "\nProduct sukses ditambahkan!\n";

            // update panjang maksimal setelah tambah data
            panjang = hitungPanjangMaksimum(list);

            tampilkanPembatas(panjang);
            tampilkanHeader(panjang);
            tampilkanPembatas(panjang);
            tampilkanData(list, panjang);
            tampilkanPembatas(panjang);
        }
        else if (pilihan == '2')
        {
            cout << "Terima kasih telah menggunakan program ini!\n";
            break; // keluar dari loop dan program selesai
        }
        else
        {
            cout << "Pilihan tidak valid! Silakan pilih 1 atau 2.\n";
        }

        // pause agar user bisa melihat hasil sebelum kembali ke menu
        cout << "\nTekan ENTER untuk kembali ke menu...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
