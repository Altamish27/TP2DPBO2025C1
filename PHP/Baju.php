<?php
include 'Aksesoris.php';

class Baju extends Aksesoris {
    private $untuk = "";
    private $ukuran = "";
    private $merk = "";

    //constructor
    public function __construct($id, $nama, $harga, $stok, $gambar, $jenis, $bahan, $warna, $untuk, $ukuran, $merk) {
        parent::__construct($id, $nama, $harga, $stok, $gambar, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->ukuran = $ukuran;
        $this->merk = $merk;
    }

    //getter setter
    public function getUntuk() {
        return $this->untuk;
    }

    public function setUntuk($untuk) {
        $this->untuk = htmlspecialchars($untuk);
    }

    public function getUkuran() {
        return $this->ukuran;
    }

    public function setUkuran($ukuran) {
        $this->ukuran = htmlspecialchars($ukuran);
    }

    public function getMerk() {
        return $this->merk;
    }

    public function setMerk($merk) {
        $this->merk = htmlspecialchars($merk);
    }

    
}
?>