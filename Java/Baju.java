// class baju ini anak dari aksesoris, jadi semua fitur aksesoris bisa dipake juga di sini
public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    // constructor default, kalo objek dibuat tapi ga dikasih data langsung
    public Baju() {
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    // constructor yang pake parameter biar langsung bisa set data pas buat objek
    public Baju(String id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna); // manggil constructor dari aksesoris
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // getter buat ngambil nilai dari variabel untuk
    public String getUntuk() {
        return this.untuk;
    }

    // setter buat ngubah nilai dari variabel untuk
    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }

    // getter buat ambil size
    public String getSize() {
        return this.size;
    }

    // setter buat ubah size
    public void setSize(String size) {
        this.size = size;
    }

    // getter buat ambil merk
    public String getMerk() {
        return this.merk;
    }

    // setter buat ubah merk
    public void setMerk(String merk) {
        this.merk = merk;
    }
}
