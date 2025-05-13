#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
    int nim;
    string nama;

    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; //definisi hanya NIM
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama; //definisi hanya NAMA
}

void mahasiswa :: cetak(){
    cout << endl << "nim : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    mahasiswa mhs1(102030);      //hanya NIM
    mahasiswa mhs2("Andi");      //hanya Nama
    mahasiswa mhs3(010203, "Santi"); //nim dan nama

    //tampilkan nilai
    cout << "Mahasiswa 1: "; mhs1.cetak();
    cout << "Mahasiswa 2: "; mhs1.cetak();
    cout << "Mahasiswa 3: "; mhs1.cetak();

    return 0;
}