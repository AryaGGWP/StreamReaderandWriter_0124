#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string baris;
    string namaFile;

    cout << "Masukkan nama file yang akan dibuat: ";
    cin >> namaFile;

    // membuat obyek output file stream dalam mode menulis
    ofstream outfile;
    // membuka file untuk menulis secara dinamis
    outfile.open(namaFile + ".txt");

    cout <<  ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis ke file
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika pengguna mengetik 'q'
        if (baris == "q") 
            break;
        // menulis dan memasukkan nilai dari baris ke file
        outfile << baris << endl;    
    }
    outfile.close(); // menutup file
    
    // membuat obyek input file stream dalam mode membaca
    ifstream infile;
    // membuka file untuk membaca
    infile.open(namaFile + ".txt");

    cout << endl << ">= Membuka dan Membaca file" << endl;
    // jika file ada maka
    if (infile.is_open()) {
        // mmelakukan perulangan untuk membaca setiap baris
        while (getline(infile, baris)) {
            // menampilkan setiap baris ke layar
            cout << baris << endl;
        }
        infile.close(); // menutup file
    } else {
        cout << "File tidak ditemukan!" << endl;
    }
}