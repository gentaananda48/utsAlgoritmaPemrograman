#include <iostream>
using namespace std;
int main()
{
      int n, i, cekPrima = 0;
      
      cout << "Masukkan bilangan: ";
      cin >> n;  
      cout <<"\n";


      if (n < 0){
            cout << n;
            cout <<" merupakan bilangan ganjil\n";
      }else{
            cout << n;
            cout <<" merupakan bilangan positif\n";
      }
      if (n%2==0){
            cout << n;
            cout <<" merupakan bilangan genap\n";
      }else{
            cout << n;
            cout <<" merupakan bilangan ganjil\n";
      }
      
      //Pengecekan bilangan prima
      for (i=1;i<=n;i++){
        if (n%i==0){
            cekPrima++;
       }
      }
      if (cekPrima == 2){
            cout << n;
            cout <<" merupakan bilangan prima\n";
      }else{
            cout << n;
            cout <<" bukan bilangan prima\n";
      }

      return 0;
}

