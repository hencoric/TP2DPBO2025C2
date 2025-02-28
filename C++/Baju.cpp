#include "Aksesoris.cpp"

// class baju, turunan dari aksesoris
class Baju : public Aksesoris
{
private:
    string untuk; // baju buat siapa (anjing, kucing, dll)
    string size;  // ukuran baju
    string merk;  // merk baju

public:
    // constructor default, awalnya kosong semua
    Baju() : Aksesoris()
    {
        this->untuk = "";
        this->size = "";
        this->merk = "";
    }

    // constructor pake parameter, langsung isi data baju
    Baju(string id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna, string untuk, string size, string merk)
        : Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna) // panggil constructor aksesoris
    {
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;
    }

    // buat ambil info baju buat siapa
    string get_untuk()
    {
        return this->untuk;
    }

    // buat ubah info baju buat siapa
    void set_untuk(string untuk)
    {
        this->untuk = untuk;
    }

    // buat ambil ukuran baju
    string get_size()
    {
        return this->size;
    }

    // buat ubah ukuran baju
    void set_size(string size)
    {
        this->size = size;
    }

    // buat ambil merk baju
    string get_merk()
    {
        return this->merk;
    }

    // buat ubah merk baju
    void set_merk(string merk)
    {
        this->merk = merk;
    }

    // buat nampilin info baju
    void display()
    {
        Aksesoris::display(); // panggil display dari aksesoris biar atribut umum tetep ditampilin
        cout << " | untuk: " << untuk
             << " | size: " << size
             << " | merk: " << merk << '\n';
    }

    // destruktor, otomatis jalan kalo objeknya dihapus
    ~Baju()
    {
    }
};
