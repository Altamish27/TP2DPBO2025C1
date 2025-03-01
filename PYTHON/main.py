from Baju import Baju

baju = Baju()
list_produk = []
baju.set_id(1)
baju.set_nama_produk("Kaos")
baju.set_kategori_produk("Atasan")
baju.set_harga_produk(50000)
baju.set_jenis("Kaos Oblong")
baju.set_bahan("Katun")
baju.set_warna("Putih")
baju.set_untuk("Pria")
baju.set_size("M")
baju.set_merek("Gildan")

list_produk.append(baju)

baju2 = Baju()
baju2.set_id(2)
baju2.set_nama_produk("Kemeja")
baju2.set_kategori_produk("Atasan")
baju2.set_harga_produk(100000)
baju2.set_jenis("Kemeja Lengan Pendek")
baju2.set_bahan("Katun")
baju2.set_warna("Biru")
baju2.set_untuk("Pria")
baju2.set_size("L")
baju2.set_merek("Uniqlo")

list_produk.append(baju2)

baju3 = Baju()
baju3.set_id(3)
baju3.set_nama_produk("Celana")
baju3.set_kategori_produk("Bawahan")
baju3.set_harga_produk(75000)
baju3.set_jenis("Celana Panjang")
baju3.set_bahan("Jeans")
baju3.set_warna("Hitam")
baju3.set_untuk("Pria")
baju3.set_size("30")
baju3.set_merek("Levis")

list_produk.append(baju3)

baju4 = Baju()
baju4.set_id(4)
baju4.set_nama_produk("Rok")
baju4.set_kategori_produk("Bawahan")
baju4.set_harga_produk(80000)
baju4.set_jenis("Rok Mini")
baju4.set_bahan("Katun")
baju4.set_warna("Merah")
baju4.set_untuk("Wanita")
baju4.set_size("M")
baju4.set_merek("Zara")

list_produk.append(baju4)

baju5 = Baju()
baju5.set_id(5)
baju5.set_nama_produk("Jaket")
baju5.set_kategori_produk("Outwear")
baju5.set_harga_produk(150000)
baju5.set_jenis("Jaket Bomber")
baju5.set_bahan("Parasut")
baju5.set_warna("Hijau")
baju5.set_untuk("Pria")
baju5.set_size("L")
baju5.set_merek("Adidas")

list_produk.append(baju5)

#input data
n = int(input())
for i in range(n):
    baju = Baju()
    baju.set_id(input())
    baju.set_nama_produk(input())
    baju.set_kategori_produk(input())
    baju.set_harga_produk(input())
    baju.set_jenis(input())
    baju.set_bahan(input())
    baju.set_warna(input())
    baju.set_untuk(input())
    baju.set_size(input())
    baju.set_merek(input())

    list_produk.append(baju)
    
#menghitung data terpanjang dari setiap atribut
id_max = len("ID")
nama_produk_max = len("Nama")
kategori_produk_max = len("Kategori")
harga_produk_max = len("Harga")
jenis_max = len("Jenis")
bahan_max = len("Bahan")
warna_max = len("Warna")
untuk_max = len("Untuk")
size_max = len("Size")
merek_max = len("Merek")

for produk in list_produk:
    id_max = max(id_max, len(str(produk.get_id())))

    nama_produk_max = max(nama_produk_max, len(produk.get_nama_produk()))
    kategori_produk_max = max(kategori_produk_max, len(produk.get_kategori_produk()))
    harga_produk_max = max(harga_produk_max, len(str(produk.get_harga_produk())))
    jenis_max = max(jenis_max, len(produk.jenis))
    bahan_max = max(bahan_max, len(produk.bahan))
    warna_max = max(warna_max, len(produk.warna))
    untuk_max = max(untuk_max, len(produk.untuk))
    size_max = max(size_max, len(produk.size))
    merek_max = max(merek_max, len(produk.merk))

print("Data Produk HasbiCats")
print("+" + "-" * (id_max + 2) + "+" + "-" * (nama_produk_max + 2) + "+" + "-" * (kategori_produk_max + 2) + "+" + "-" * (harga_produk_max + 2) + "+" + "-" * (jenis_max + 2) + "+" + "-" * (bahan_max + 2) + "+" + "-" * (warna_max + 2) + "+" + "-" * (untuk_max + 2) + "+" + "-" * (size_max + 2) + "+" + "-" * (merek_max + 2) + "+")
print("| ID" + " " * (id_max - 2) + " | Nama" + " " * (nama_produk_max - 4) + " | Kategori" + " " * (kategori_produk_max - 8) + " | Harga" + " " * (harga_produk_max - 5) + " | Jenis" + " " * (jenis_max - 5) + " | Bahan" + " " * (bahan_max - 5) + " | Warna" + " " * (warna_max - 5) + " | Untuk" + " " * (untuk_max - 5) + " | Size" + " " * (size_max - 4) + " | Merek" + " " * (merek_max - 5) + " |")
print("+" + "-" * (id_max + 2) + "+" + "-" * (nama_produk_max + 2) + "+" + "-" * (kategori_produk_max + 2) + "+" + "-" * (harga_produk_max + 2) + "+" + "-" * (jenis_max + 2) + "+" + "-" * (bahan_max + 2) + "+" + "-" * (warna_max + 2) + "+" + "-" * (untuk_max + 2) + "+" + "-" * (size_max + 2) + "+" + "-" * (merek_max + 2) + "+")
for produk in list_produk:
    print("| " + str(produk.get_id()) + " " * (id_max - len(str(produk.get_id()))) + " | " + produk.get_nama_produk() + " " * (nama_produk_max - len(produk.get_nama_produk())) + " | " + produk.get_kategori_produk() + " " * (kategori_produk_max - len(produk.get_kategori_produk())) + " | " + str(produk.get_harga_produk()) + " " * (harga_produk_max - len(str(produk.get_harga_produk()))) + " | " + produk.jenis + " " * (jenis_max - len(produk.jenis)) + " | " + produk.bahan + " " * (bahan_max - len(produk.bahan)) + " | " + produk.warna + " " * (warna_max - len(produk.warna)) + " | " + produk.untuk + " " * (untuk_max - len(produk.untuk)) + " | " + produk.size + " " * (size_max - len(produk.size)) + " | " + produk.merk + " " * (merek_max - len(produk.merk)) + " |")
print("+" + "-" * (id_max + 2) + "+" + "-" * (nama_produk_max + 2) + "+" + "-" * (kategori_produk_max + 2) + "+" + "-" * (harga_produk_max + 2) + "+" + "-" * (jenis_max + 2) + "+" + "-" * (bahan_max + 2) + "+" + "-" * (warna_max + 2) + "+" + "-" * (untuk_max + 2) + "+" + "-" * (size_max + 2) + "+" + "-" * (merek_max + 2) + "+")

