#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string baris;

    // membuat obyek output file stream dalam mode menulis
    ofstream outfile;
    // membuka file untuk menulis
    outfile.open("contohfile.txt");

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
    infile.open("contohfile.txt");

    cout << endl;
}