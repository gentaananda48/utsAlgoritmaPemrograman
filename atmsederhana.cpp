#include <iostream>
using namespace std;
int main()
{   int n;
    char t;
    do{
    cout << "Silakan pilih (1-3) jumlah uang yang akan anda ambil: \n 1. 100.000 \n 2. 250.000 \n 3. 500.000 \n Pilihan : ";
    cin >> n;

    switch (n){
        case 1:
        cout << "Silakan ambil uang 100.000 anda\n";
        break;
        case 2:
        cout << "Silakan ambil uang 250.000 anda\n";
        break;
        case 3:
        cout << "Silakan ambil uang 500.000 anda\n";
        break;
        default: 
        cout << "Pilihan tidak tersedia\n";

    }
    
    cout << "Apakah anda ingin melakukan trasaksi lain?(y/n) :\n";
    cin >> t;
    
    }
    while (t != 'n');
    
      
    cout << "Terimakasih telah menggunakan ATM ini\n";
    return 0;
    
    
}

