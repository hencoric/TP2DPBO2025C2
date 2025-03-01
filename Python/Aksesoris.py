# import class petshop dulu
from PetShop import PetShop

# class aksesoris ini turunannya petshop
class Aksesoris(PetShop):
    def __init__(self, id="", nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna=""):
        # panggil constructor dari petshop buat inisialisasi atribut umum
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        # atribut khusus buat aksesoris
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    # buat ngambil jenis aksesoris
    def get_jenis(self):
        return self.__jenis

    # buat ngubah jenis aksesoris
    def set_jenis(self, jenis):
        self.__jenis = jenis

    # buat ngambil bahan aksesoris
    def get_bahan(self):
        return self.__bahan

    # buat ngubah bahan aksesoris
    def set_bahan(self, bahan):
        self.__bahan = bahan

    # buat ngambil warna aksesoris
    def get_warna(self):
        return self.__warna

    # buat ngubah warna aksesoris
    def set_warna(self, warna):
        self.__warna = warna

