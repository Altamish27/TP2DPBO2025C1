#include <iostream>
#include <string>
#include <list>
#include "Baju.cpp"

using namespace std;

int main (){

    list<Baju> listProduk;
    Baju produk;

    produk.setId(1);
    produk.setNamaProduk("Baju");
    produk.setHargaProduk(100000);
    produk.setStokProduk(10);
    produk.setJenis("Kaos");
    produk.setBahan("Katun");
    produk.setWarna("Putih");
    produk.setUntuk("Pria");
    produk.setSize("M");
    produk.setMerk("Gucci");   

    listProduk.push_back(produk);

    produk.setId(2);
    produk.setNamaProduk("Baju");
    produk.setHargaProduk(200000);
    produk.setStokProduk(20);
    produk.setJenis("Kemeja");
    produk.setBahan("Denim");
    produk.setWarna("Biru");
    produk.setUntuk("Wanita");
    produk.setSize("L");
    produk.setMerk("Zara");

    listProduk.push_back(produk);

    produk.setId(3);
    produk.setNamaProduk("Baju");
    produk.setHargaProduk(300000);
    produk.setStokProduk(30);
    produk.setJenis("Kaos");
    produk.setBahan("Katun");
    produk.setWarna("Hitam");
    produk.setUntuk("Pria");
    produk.setSize("S");
    produk.setMerk("Adidas");

    listProduk.push_back(produk);

    produk.setId(4);
    produk.setNamaProduk("Baju");
    produk.setHargaProduk(400000);
    produk.setStokProduk(40);
    produk.setJenis("Kemeja");
    produk.setBahan("Denim");
    produk.setWarna("Putih");
    produk.setUntuk("Wanita");
    produk.setSize("M");
    produk.setMerk("Gucci");

    listProduk.push_back(produk);

    produk.setId(5);
    produk.setNamaProduk("Baju");
    produk.setHargaProduk(500000);
    produk.setStokProduk(50);
    produk.setJenis("Kaos");
    produk.setBahan("Katun");
    produk.setWarna("Merah");
    produk.setUntuk("Pria");
    produk.setSize("L");
    produk.setMerk("Zara");

    listProduk.push_back(produk);

    int n = 0;
    cin >> n;


    for(int i = 0; i < n; i++){
        int id, harga, stok;
        string nama, jenis, bahan, warna, untuk, size, merk;

        cin >> id;
        cin >> nama;
        cin >> harga;
        cin >> stok;
        cin >> jenis;
        cin >> bahan;
        cin >> warna;
        cin >> untuk;
        cin >> size;
        cin >> merk;

        produk.setId(id);
        produk.setNamaProduk(nama);
        produk.setHargaProduk(harga);
        produk.setStokProduk(stok);
        produk.setJenis(jenis);
        produk.setBahan(bahan);
        produk.setWarna(warna);
        produk.setUntuk(untuk);
        produk.setSize(size);
        produk.setMerk(merk);

        listProduk.push_back(produk);

    }
    
    

    int idLength = 2;
    int namaLength = 4;
    int hargaLength = 5;
    int stokLength = 4;
    int jenisLength = 5;
    int bahanLength = 5;
    int warnaLength = 5;
    int untukLength = 5;
    int sizeLength = 4;
    int merkLength = 4;

    for(Baju produk : listProduk){
        if(to_string(produk.getId()).length() > idLength){
            idLength = to_string(produk.getId()).length();
        }
        if(produk.getNamaProduk().length() > namaLength){
            namaLength = produk.getNamaProduk().length();
        }
        if(to_string(produk.getHargaProduk()).length() > hargaLength){
            hargaLength = to_string(produk.getHargaProduk()).length();
        }
        if(to_string(produk.getStokProduk()).length() > stokLength){
            stokLength = to_string(produk.getStokProduk()).length();
        }
        if(produk.getJenis().length() > jenisLength){
            jenisLength = produk.getJenis().length();
        }
        if(produk.getBahan().length() > bahanLength){
            bahanLength = produk.getBahan().length();
        }
        if(produk.getWarna().length() > warnaLength){
            warnaLength = produk.getWarna().length();
        }
        if(produk.getUntuk().length() > untukLength){
            untukLength = produk.getUntuk().length();
        }
        if(produk.getSize().length() > sizeLength){
            sizeLength = produk.getSize().length();
        }
        if(produk.getMerk().length() > merkLength){
            merkLength = produk.getMerk().length();
        }
    }

    cout << "Daftar Produk HasbiCats\n";
    cout << "+";
    for(int i = 0; i < idLength + + namaLength + hargaLength + stokLength + jenisLength + bahanLength + warnaLength + untukLength + sizeLength + merkLength + 29; i++){
        cout << "-";
    }
    cout << "+";
    cout << endl;
    
    cout << "| ID";
    for(int i = 0; i < idLength-2; i++){
        cout << " ";
    }
    cout << " | Nama";
    for(int i = 0; i < namaLength -4; i++){
        cout << " ";
    }
    cout << " | Harga";
    for(int i = 0; i < hargaLength - 5; i++){
        cout << " ";
    }
    cout << " | Stok";
    for(int i = 0; i < stokLength - 4; i++){
        cout << " ";
    }
    cout << " | Jenis";
    for(int i = 0; i < jenisLength - 5; i++){
        cout << " ";
    }
    cout << " | Bahan";
    for(int i = 0; i < bahanLength - 5; i++){
        cout << " ";
    }
    cout << " | Warna";
    for(int i = 0; i < warnaLength - 5; i++){
        cout << " ";
    }
    cout << " | Untuk";
    for(int i = 0; i < untukLength - 5; i++){
        cout << " ";
    }
    cout << " | Size";
    for(int i = 0; i < sizeLength - 4; i++){
        cout << " ";
    }
    cout << " | Merk";
    for(int i = 0; i < merkLength - 4; i++){
        cout << " ";
    }
    cout << " |";
    cout << endl;
    cout << "+";
    for(int i = 0; i < idLength + + namaLength + hargaLength + stokLength + jenisLength + bahanLength + warnaLength + untukLength + sizeLength + merkLength + 29; i++){
        cout << "-";
    }
    cout << "+";
    cout << endl;
    
    for(Baju produk : listProduk){
        cout << "| " << produk.getId();
        for(int i = 0; i < idLength - to_string(produk.getId()).length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getNamaProduk();
        for(int i = 0; i < namaLength - produk.getNamaProduk().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getHargaProduk();
        for(int i = 0; i < hargaLength - to_string(produk.getHargaProduk()).length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getStokProduk();
        for(int i = 0; i < stokLength - to_string(produk.getStokProduk()).length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getJenis();
        for(int i = 0; i < jenisLength - produk.getJenis().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getBahan();
        for(int i = 0; i < bahanLength - produk.getBahan().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getWarna();
        for(int i = 0; i < warnaLength - produk.getWarna().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getUntuk();
        for(int i = 0; i < untukLength - produk.getUntuk().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getSize();
        for(int i = 0; i < sizeLength - produk.getSize().length(); i++){
            cout << " ";
        }
        cout << " | " << produk.getMerk();
        for(int i = 0; i < merkLength - produk.getMerk().length(); i++){
            cout << " ";
        }
        cout << " |";
        cout << endl;
    }
    cout << "+";
    for(int i = 0; i < idLength + + namaLength + hargaLength + stokLength + jenisLength + bahanLength + warnaLength + untukLength + sizeLength + merkLength + 29; i++){
        cout << "-";
    }
    cout << "+";



    return 0;


 
}