#include <iostream>
using namespace std;
int main()
{
      int i, j, n;
      cout << "Masukkan jumlah baris: ";
      cin >> n;  
      if (n % 2 == 0){
            cout << "Mohon masukan bilangan ganjil!" ;
            cout << "\n";
            return 0;
      }
      int num1 = n / 2 * 3;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n; j++)
            {                 
                  if (i == n / 2 || j == n / 2  )
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}

