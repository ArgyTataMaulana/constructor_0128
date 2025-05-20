//buatlah program c++ dengan class barang yang memiliki atribut:namaBarang, 
//kodeBarang
//program memiliki constructor berparameter untuk mengisi 
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
using namespace std;

class barang {
    private:
    string namaBarang;
    int kodeBarang;

    public:
    
    barang();
    barang(int);
    barang(string);
    //constructor parameter
    barang(string inamaBarang, int ikodeBarang);
    void cetak();
};

//mendefinisi constructor dengan parameter
barang::barang(string inamaBarang, int ikodeBarang) {
    namaBarang = inamaBarang;
    kodeBarang = ikodeBarang;
};

void barang :: cetak() {
    cout << endl;
    cout << "kode barang : " << kodeBarang <<endl;
    cout << "nama barang : " << namaBarang <<endl;
    cout << endl;
}



int main() {
     //membuat objek dari class barang
    barang brg1("buku", 11); //kodeBarang dan namaBarang
    barang brg2("pulpen", 12); //kodeBarang dan namaBarang
    barang brg3("penghapus", 13); //kodeBarang dan namaBarang
    barang brg4("pensil", 14); //kodeBarang dan namaBarang

    //tampilkan nilai
     cout << "Barang 1 : "; brg1.cetak();
     cout << "Barang 2 : "; brg2.cetak();
     cout << "Barang 3 : "; brg3.cetak();
     cout << "Barang 4 : "; brg4.cetak();

    return 0;
}