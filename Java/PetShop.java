// Class dasar PetShop
class PetShop {
    private String id;
    private String namaProduk;
    private int hargaProduk;
    private int stokProduk;

    // Constructor default
    public PetShop() {
        this.id = "";
        this.namaProduk = "";
        this.hargaProduk = 0;
        this.stokProduk = 0;
    }

    // Constructor dengan parameter
    public PetShop(String id, String namaProduk, int hargaProduk, int stokProduk) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.hargaProduk = hargaProduk;
        this.stokProduk = stokProduk;
    }

    // buat ngambil id produk
    public String getId() {
        return this.id; // balikin id-nya
    }

    // buat ganti id produk
    public void setId(String id) {
        this.id = id; // update id produk
    }

    // buat ngambil nama produk
    public String getNama() {
        return this.namaProduk; // balikin nama produk
    }

    // buat ganti nama produk
    public void setNama(String namaProduk) {
        this.namaProduk = namaProduk; // update nama produk
    }

    // buat ngambil harga produk
    public int getHarga() {
        return this.hargaProduk; // balikin harga produk
    }

    // buat ganti harga produk
    public void setHarga(int hargaProduk) {
        this.hargaProduk = hargaProduk; // update harga produk
    }

    // buat ngambil stok produk
    public int getStok() {
        return this.stokProduk; // balikin stok produk
    }

    // buat ganti stok produk
    public void setStok(int stokProduk) {
        this.stokProduk = stokProduk; // update stok produk
    }

    // buat nampilin info produk ke layar
    public void display() {
        System.out.println("ID: " + this.id + " | Nama: " + this.namaProduk
                + " | Harga: " + this.hargaProduk + " | Stok: " + this.stokProduk);
        // nampilin id, nama, harga, sama stok produk
    }
}
