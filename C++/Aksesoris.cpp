#include "PetShop.cpp"

using namespace std;

// class aksesoris, turunan dari petshop
class Aksesoris : public PetShop
{
private:
    string jenis; // jenis aksesoris
    string bahan; // bahan aksesoris
    string warna; // warna aksesoris

public:
    // constructor default, awalnya kosong semua
    Aksesoris()
    {
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }

    // constructor pake parameter, langsung isi data aksesoris
    Aksesoris(string id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna)
        : PetShop(id, nama_produk, harga_produk, stok_produk) // panggil constructor petshop
    {
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    // buat ambil jenis aksesoris
    string get_jenis()
    {
        return this->jenis;
    }

    // buat ubah jenis aksesoris
    void set_jenis(string jenis)
    {
        this->jenis = jenis;
    }

    // buat ambil bahan aksesoris
    string get_bahan()
    {
        return this->bahan;
    }

    // buat ubah bahan aksesoris
    void set_bahan(string bahan)
    {
        this->bahan = bahan;
    }

    // buat ambil warna aksesoris
    string get_warna()
    {
        return this->warna;
    }

    // buat ubah warna aksesoris
    void set_warna(string warna)
    {
        this->warna = warna;
    }

    // buat nampilin info aksesoris
    void display()
    {
        PetShop::display(); //panggil display dari petshop biar atribut umum tetep ditampilin
        cout << " | jenis: " << jenis
             << " | bahan: " << bahan
             << " | warna: " << warna;
    }

    // destruktor, otomatis jalan kalo objeknya dihapus
    ~Aksesoris()
    {
    }
};
