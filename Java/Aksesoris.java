public class Aksesoris extends PetShop {
    private String jenis;
    private String bahan;
    private String warna;

    // constructor default, kalo objek dibuat tapi ga dikasih data langsung
    public Aksesoris() {
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    // constructor yang pake parameter biar langsung bisa set data pas buat objek
    public Aksesoris(String id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan,
            String warna) {
        super(id, namaProduk, hargaProduk, stokProduk); // manggil constructor dari PetShop
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    // getter buat ngambil nilai dari variabel jenis
    public String getJenis() {
        return this.jenis;
    }

    // setter buat ngubah nilai dari variabel jenis
    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    // getter buat ambil bahan
    public String getBahan() {
        return this.bahan;
    }

    // setter buat ubah bahan
    public void setBahan(String bahan) {
        this.bahan = bahan;
    }

    // getter buat ambil warna
    public String getWarna() {
        return this.warna;
    }

    // setter buat ubah warna
    public void setWarna(String warna) {
        this.warna = warna;
    }
}
