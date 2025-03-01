#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class dasar buat petshop
class PetShop
{
private:
    string id;          // id produk
    string nama_produk; // nama produk
    int harga_produk;   // harga produk
    int stok_produk;    // stok produk

public:
    // constructor default, nilai awalnya kosong atau 0
    PetShop()
    {
        this->id = "";
        this->nama_produk = "";
        this->harga_produk = 0;
        this->stok_produk = 0;
    }

    // constructor pake parameter, langsung isi data produk
    PetShop(string id, string nama_produk, int harga_produk, int stok_produk)
    {
        this->id = id;
        this->nama_produk = nama_produk;
        this->harga_produk = harga_produk;
        this->stok_produk = stok_produk;
    }

    // buat ambil id produk
    string get_id()
    {
        return this->id; // balikin id produk
    }

    // buat ubah id produk
    void set_id(string id)
    {
        this->id = id; // update id produk
    }

    // buat ambil nama produk
    string get_nama()
    {
        return this->nama_produk; // balikin nama produk
    }

    // buat ubah nama produk
    void set_nama(string nama_produk)
    {
        this->nama_produk = nama_produk; // update nama produk
    }

    // buat ambil harga produk
    int get_harga()
    {
        return this->harga_produk; // balikin harga produk
    }

    // buat ubah harga produk
    void set_harga(int harga_produk)
    {
        this->harga_produk = harga_produk; // update harga produk
    }

    // buat ambil stok produk
    int get_stok()
    {
        return this->stok_produk; // balikin stok produk
    }

    // buat ubah stok produk
    void set_stok(int stok_produk)
    {
        this->stok_produk = stok_produk; // update stok produk
    }

    // destruktor, otomatis jalan kalo objeknya dihapus
    ~PetShop()
    {
    }
};
