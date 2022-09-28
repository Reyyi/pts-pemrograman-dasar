#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout << "masukan kehadiran="<<endl;
    int angka1;
    cin >> angka1;           
    cout << "masukkan Tugas=";
    int angka2;
    cin >> angka2;
    cout << "masukkan UTS=";
    int angka3;
    cin >> angka3;
    cout <<"Masukan UAS=";
    int angka4;
    cin >> angka4;
    int hasil;
    hasil = (angka1+angka2+angka3+angka4)/4;
   
    cout << "hasil rumus ="<<hasil;
}