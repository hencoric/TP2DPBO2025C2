# class PetShop buat nyimpen data produk di pet shop
class PetShop:
    def __init__(self, id="", nama_produk="", harga_produk=0, stok_produk=0):
        # inisialisasi atribut produk
        self.id = id
        self.nama_produk = nama_produk
        self.harga_produk = harga_produk
        self.stok_produk = stok_produk

    # buat ngambil id produk
    def get_id(self):
        return self.id

    # buat ngubah id produk
    def set_id(self, id):
        self.id = id

    # buat ngambil nama produk
    def get_nama(self):
        return self.nama_produk

    # buat ngubah nama produk
    def set_nama(self, nama_produk):
        self.nama_produk = nama_produk

    # buat ngambil harga produk
    def get_harga(self):
        return self.harga_produk

    # buat ngubah harga produk
    def set_harga(self, harga_produk):
        self.harga_produk = harga_produk

    # buat ngambil stok produk
    def get_stok(self):
        return self.stok_produk

    # buat ngubah stok produk
    def set_stok(self, stok_produk):
        self.stok_produk = stok_produk

    # buat nampilin data produk
    def display(self):
        print(f"id: {self.id} | nama: {self.nama_produk} | harga: {self.harga_produk} | stok: {self.stok_produk}")
