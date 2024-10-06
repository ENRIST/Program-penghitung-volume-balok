#include <iostream>
using namespace std;

int main ()
{
    //Meminta input kepada user
    int p,l,t,volume;
    cout << "Kalkulator penghitung volume Balok" <<endl;
    cout << "==================================" <<endl;
    cout << "Silahkan masukkan Panjang :";
    cin >> p;
    cout << "Silahkan masukkan Lebar :";
    cin >> l;
    cout << "Silahkan Masukkan Tinggi :";
    cin >> t;

    //rumus perhitungan
    volume = p * l * t;

    //output penghitungan
    cout << "===================================" <<endl;
    cout << "Hasil dari perhitungan Volume balok dengan panjang " << p << " luas " << l << " dan tinggi " << t << " adalah " << volume;

    return 0;
}
