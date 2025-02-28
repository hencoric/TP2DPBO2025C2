# TP2DPBO2025C2

Saya Marco Henrik Abineno dengan NIM 2301093 mengerjakan evaluasi Latihan Modul dalam mata kuliah Desain Pemrograman Berbasis Object untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Amin.

# DIAGRAM
  
![image](https://github.com/user-attachments/assets/8fdab942-8331-4ff3-aef8-c3556900b041)

# DESAIN PRODUK

Sistem ini terdiri dari tiga kelas utama yang membentuk hierarki Child → Parent, yaitu Baju → Aksesoris → PetShop. Setiap kelas memiliki atribut yang digunakan untuk menyimpan informasi produk sesuai dengan kategorinya.

**1. PetShop (Parent Class)**
Kelas dasar yang berisi atribut umum untuk semua produk di toko hewan peliharaan:

id (String) → Kode unik untuk mengidentifikasi setiap produk.
nama_produk (String)
harga_produk (int)
stok_produk (int)
Kelas ini menjadi dasar bagi kategori produk lainnya, seperti aksesoris dan baju.

**2. Aksesoris (Child dari PetShop)**
Kelas ini merupakan turunan dari PetShop dengan menambahkan atribut tambahan:

jenis (String)
bahan (String)
warna (String)
  
**3. Baju (Child dari Aksesoris)**
Kelas Baju adalah turunan dari Aksesoris dengan atribut tambahan pada kelas ini:

untuk (String)
size (String
merk (String)
