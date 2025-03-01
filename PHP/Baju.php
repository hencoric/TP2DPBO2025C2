<?php
include_once "Aksesoris.php";

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    public function __construct($id = "", $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto_produk = "", $jenis = "", $bahan = "", $warna = "", $untuk = "", $size = "", $merk = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna); // Panggil constructor Aksesoris
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    public function getUntuk() {
        return $this->untuk;
    }
    public function setUntuk($untuk) {
        $this->untuk = $untuk;
    }

    public function getSize() {
        return $this->size;
    }
    public function setSize($size) {
        $this->size = $size;
    }

    public function getMerk() {
        return $this->merk;
    }
    public function setMerk($merk) {
        $this->merk = $merk;
    }

    public function display() {
        parent::display();
        echo " | Untuk: {$this->untuk} | Size: {$this->size} | Merk: {$this->merk}\n";
    }
}
?>
