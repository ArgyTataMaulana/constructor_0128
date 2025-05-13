#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    // constructor dengan parameter
    mahasiswa(int nim, string nama);   
};

// definisi  constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan Parameter Terpanggil" <<endl;
    cout << "NIM   : " << nim << endl; 
    cout << "Nama   : " << nama << endl; 
};

int main(){
    // Memanggil constructor dengan parameter
    mahasiswa mhs(12345, "pascal");
    return 0;
}