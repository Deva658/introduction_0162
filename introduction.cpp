#include <iostream>
using namespace std;



int main()
{//begin
    //numeric panjang,lebar,luas
    double panjang{};
    double lebar;
    double luas;
    cout << "masukkan panjangnya = ";
    //accept panjang
    cin >> panjang;
    cout << "masukkan lebarnya = ";
    //accept lebarnya
    cin >> lebar;

    luas = panjang * lebar;

    cout << "luasnya adalah = " << luas;
}//end