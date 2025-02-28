# import class aksesoris dulu
from Aksesoris import Aksesoris

# class baju ini turunannya aksesoris
class Baju(Aksesoris):
    def __init__(self, id="", nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna="", untuk="", size="", merk=""):
        # panggil constructor dari aksesoris biar atribut umum keisi dulu
        super().__init__(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna)
        # atribut khusus buat baju
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    # buat ngambil siapa yang pake bajunya (misal anjing, kucing, dll.)
    def get_untuk(self):
        return self.__untuk

    # buat ngubah siapa yang pake bajunya
    def set_untuk(self, untuk):
        self.__untuk = untuk

    # buat ngambil ukuran baju
    def get_size(self):
        return self.__size

    # buat ngubah ukuran baju
    def set_size(self, size):
        self.__size = size

    # buat ngambil merk baju
    def get_merk(self):
        return self.__merk

    # buat ngubah merk baju
    def set_merk(self, merk):
        self.__merk = merk

    # buat nampilin data baju
    def display(self):
        # panggil display dari aksesoris biar atribut umum tetep ditampilin
        super().display()
        # tambahin atribut spesifik baju
        print(f" | untuk: {self.__untuk} | size: {self.__size} | merk: {self.__merk}")
