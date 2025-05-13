#include <iostream>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(); // constructor mahasiswa
};

mahasiswa::mahasiswa(){
    cout << "constructor Terpanggil" << endl; //definisi constructor
};

int main(){
    mahasiswa mhs;
    return 0;
}