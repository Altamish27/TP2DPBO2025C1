<?php

include 'Baju.php';

$baju1 = new Baju(1, 'Kaos Polos', 150000, 10, 'Assets\1.jpeg', 'Kaos', 'Katun', 'Putih', 'Pria', 'L', 'Nike');
$baju2 = new Baju(2, 'Jaket Hoodie', 300000, 5, 'Assets\2.jpeg', 'Jaket', 'Polyester', 'Hitam', 'Wanita', 'M', 'Adidas');
$baju3 = new Baju(3, 'Sweater Rajut', 250000, 8, 'Assets\3.jpeg', 'Sweater', 'Wool', 'Abu-abu', 'Pria', 'M', 'Puma');
$baju4 = new Baju(4, 'Kemeja Flanel', 200000, 7, 'Assets\2.jpeg', 'Kemeja', 'Flanel', 'Merah', 'Wanita', 'L', 'Uniqlo');
$baju5 = new Baju(5, 'Kaos Distro', 180000, 9, 'Assets\1.jpeg', 'Kaos', 'Katun', 'Biru', 'Pria', 'XL', 'Zara');

$produk = [$baju1, $baju2, $baju3, $baju4, $baju5];
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Produk Baju</title>
</head>
<body>

    <h1>Daftar Produk Baju</h1>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Gambar</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Ukuran</th>
            <th>Merk</th>
        </tr>

        <?php
        foreach ($produk as $baju) {
            echo "<tr>";
            echo "<td>" . $baju->getId() . "</td>";
            echo "<td>" . $baju->getNama() . "</td>";
            echo "<td>" . $baju->getHarga() . "</td>";
            echo "<td>" . $baju->getStok() . "</td>";
            echo "<td><img src='" . $baju->getGambar() . "' alt='" . $baju->getNama() . "' width='100'></td>";
            echo "<td>" . $baju->getJenis() . "</td>";
            echo "<td>" . $baju->getBahan() . "</td>";
            echo "<td>" . $baju->getWarna() . "</td>";
            echo "<td>" . $baju->getUntuk() . "</td>";
            echo "<td>" . $baju->getUkuran() . "</td>";
            echo "<td>" . $baju->getMerk() . "</td>";
            echo "</tr>";
        }
        ?>
    </table>

</body>
</html>
