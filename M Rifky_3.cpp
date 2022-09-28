#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   float d,r,L,K,miring;
    cout<<"menghitung luas dan keliling lingkaran"<<endl;
    cout<<"masukkan nilai diameter:";
    cin>>d;
    r=0.5*d;
    L=3.14*r*r;
    K=3.14*d;
    cout<<"Keliling lingkaran: "<<K<<"cm"<<endl;
    cout<<"Luas lingkaran: "<<L<<"cm2"<<endl;
    return 0;
}