#include <iostream>
using namespace std;

class buku {
    string Judul;
    public:
        string setget(string jdl)
        {
            // Nilai parameter 'judul' untuk member variabel 'judul'
            this->Judul = jdl;
            // return variabel judul.
            return this->Judul;
        }
};

int main()
{
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}