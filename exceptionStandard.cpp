#include <iostream>
#include <exception>
// menangani obyek pengecualian yang digunakan
#include <array>
// untuk obyek array yang digunakan
using namespace std;

int main() {
   cout << "Awal program" << endl; // penanda 1
   try {
        array<int, 3> data = {10, 20, 30};
        // pesan array interger 3 elemen
        cout << data.at(4) << endl;
        // memanggil array elemen ke-4
   }
   catch (exception &e) {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya
        memiliki 3 elemen*/
   } 
    cout << "Baris Akhir program" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti
    meski terjadi kesalahan*/
    return 0;
}