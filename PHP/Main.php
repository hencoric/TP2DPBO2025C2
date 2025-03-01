<?php
include_once "Baju.php";

$productList = [
    new Baju("B001", "Kaos_Polos", 120000, 50, "https://down-id.img.susercontent.com/file/56db5211b9edf0ddfe77b9c8bbf6b85b", "Pakaian", "Katun", "Hitam", "Anjing", "L", "Nike"),
    new Baju("B002", "Jaket_Hoodie", 250000, 30, "https://img.lazcdn.com/g/p/0f924fd89fb3e1b3aada6699f936b131.jpg_720x720q80.jpg", "Pakaian", "Fleece", "Abu-abu", "Kucing", "XL", "Adidas"),
    new Baju("B003", "Kemeja_Formal", 300000, 20, "https://images.tokopedia.net/img/cache/500-square/VqbcmM/2024/2/13/e5105307-0a61-4b28-bc55-b5d015d0aee6.jpg", "Pakaian", "Linen", "Putih", "Anjing", "M", "Zara"),
    new Baju("B004", "Blouse_Casual", 180000, 40, "https://down-id.img.susercontent.com/file/id-11134207-7qul7-lhoj054xeklqd3", "Pakaian", "Sifon", "Merah", "Kucing", "S", "H&M"),
    new Baju("A001", "Kalung", 350000, 25, "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSI7jNRHt6FYDWZ9qgQlmkZs8yt8RWKeqhgxg&s", "Aksesoris", "Kulit", "Biru", "-", "-", "-")
];

if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_FILES["foto_produk"])) {
    $target_dir = "uploads/";
    $target_file = $target_dir . basename($_FILES["foto_produk"]["name"]);
    move_uploaded_file($_FILES["foto_produk"]["tmp_name"], $target_file);

    $newProduct = new Baju(
        $_POST['id'], $_POST['nama_produk'], $_POST['harga_produk'], $_POST['stok_produk'], $target_file,
        $_POST['jenis'], $_POST['bahan'], $_POST['warna'], $_POST['untuk'], $_POST['size'], $_POST['merk']
    );
    $productList[] = $newProduct;
}
?>
<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PetShop Inventory</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-bottom: 20px;
        }
        th, td {
            padding: 8px;
            text-align: left;
            border: 1px solid #ddd;
        }
        th {
            background-color: #f2f2f2;
        }
        form {
            max-width: 500px;
            margin-top: 20px;
        }
        label {
            display: inline-block;
            width: 100px;
            margin-bottom: 10px;
        }
        input {
            padding: 5px;
            margin-bottom: 10px;
        }
        button {
            padding: 8px 15px;
            background-color: #4CAF50;
            color: white;
            border: none;
            cursor: pointer;
        }
    </style>
</head>
<body>
    <h2>Daftar Produk</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Foto</th>
            <th>Kategori</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>
        <?php foreach ($productList as $produk) : ?>
            <tr>
                <td><?= $produk->getId(); ?></td>
                <td><?= $produk->getNama(); ?></td>
                <td>Rp <?= number_format($produk->getHarga(), 0, ',', '.'); ?></td>
                <td><?= $produk->getStok(); ?></td>
                <td><img src="<?= $produk->getFoto(); ?>" width="50" alt="<?= $produk->getNama(); ?>"></td>
                <td><?= $produk->getJenis(); ?></td>
                <td><?= $produk->getBahan(); ?></td>
                <td><?= $produk->getWarna(); ?></td>
                <td><?= $produk->getUntuk(); ?></td>
                <td><?= $produk->getSize(); ?></td>
                <td><?= $produk->getMerk(); ?></td>
            </tr>
        <?php endforeach; ?>
    </table>
    
    <h2>Tambah Produk</h2>
    <form action="" method="post" enctype="multipart/form-data">
        <div>
            <label>ID:</label> 
            <input type="text" name="id" required>
        </div>
        <div>
            <label>Nama:</label> 
            <input type="text" name="nama_produk" required>
        </div>
        <div>
            <label>Harga:</label> 
            <input type="number" name="harga_produk" required>
        </div>
        <div>
            <label>Stok:</label> 
            <input type="number" name="stok_produk" required>
        </div>
        <div>
            <label>Foto:</label> 
            <input type="file" name="foto_produk" required>
        </div>
        <div>
            <label>Kategori:</label> 
            <input type="text" name="jenis" required>
        </div>
        <div>
            <label>Bahan:</label> 
            <input type="text" name="bahan" required>
        </div>
        <div>
            <label>Warna:</label> 
            <input type="text" name="warna" required>
        </div>
        <div>
            <label>Untuk:</label> 
            <input type="text" name="untuk" required>
        </div>
        <div>
            <label>Size:</label> 
            <input type="text" name="size" required>
        </div>
        <div>
            <label>Merk:</label> 
            <input type="text" name="merk" required>
        </div>
        <button type="submit">Tambah Produk</button>
    </form>
</body>
</html>