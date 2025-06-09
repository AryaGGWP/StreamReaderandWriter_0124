#include <iostream>
using namespace std;

int main(){
    try 
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo");
        cout << "IPernyataan ini tidak untuk dieksekusi" << endl;
    }
    catch (int a)
    {
        
    }
}