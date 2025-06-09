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
        // blok ini akan dieksekusi
        cout << "Pengecualian dieksekusi" << endl;
    }
    catch(...){
        /*jika selain data interger maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}