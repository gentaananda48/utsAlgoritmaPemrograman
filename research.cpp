 #include <iostream>


using namespace std;



int main (){
    int angka,i,cek=0;
  
cout<<"masukan angka = ";cin>>angka;

   for (i=1;i<=angka;i++){
        if (angka%i==0){
            cek++;
       }
   }
     
if (cek == 2){
   cout<<"Bilangan Prima";
}

else
    cout<<"Bukan Prima";

}