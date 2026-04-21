#include <iostream>
using namespace std;

class barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;
    void tampilSpek(){
        cout << "nama barang : " << nama << endl;
        cout << "jumlah barang : " << jumlah << endl;
        cout << "kategori barang : " << kategori << endl;
        cout << "tanggal Produksi : " << tanggalProduksi << endl;
    }

};

int main(){
    barang elektronik;
    barang nonElectronik;

    elektronik.nama=  "laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "1945-08-17";

    cout << endl;

    nonElectronik.nama = "supersemar";
    nonElectronik.jumlah = 1;
    nonElectronik.kategori = "nonElektronik";
    nonElectronik.tampilSpek();

}