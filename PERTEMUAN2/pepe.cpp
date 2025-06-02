
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

using namespace std;

void print_lirik(){
    vector<pair<string,double>> 
	baris= {
        {"Bertukar kabar dan cerita", 0.1},
        {"Berjam-jam dan siklus yang sama", 0.07},
        {"Mendengar renyah suaramu", 0.15},
        {"Di hari-hari penuh rindu", 0.09},
        {"Ingin ku mengaku padamu", 0.14},
        {"Bahwa ku mulai menyukaimu", 0.12},
        {"Namun, s'lalu bertemu ragu", 0.09},
        {"Gelisah berakhir jadi kaku", 0.09},
        {"Takut semuanya berlalu", 0.11},
        {"Kau pun jauh meninggalkanku", 0.12},
        {"Maka simpan dalam rasaku", 0.11},
        {"Puas sebatas jadi", 0.10},
        {"'Pendengar Setiamu'", 0.25}
    };

    vector<double> jeda = {1.2, 1.3, 1.3, 1, 1.2, 1, 1.5, 1.5, 1.1, 0.8, 0.9, 0.9};

    for (size_t i=0; i<baris.size(); ++i){
        for (char c : baris[i].first){
            cout<<c;
            cout.flush();
            this_thread::sleep_for(chrono::duration<double>(baris[i].second)); //buat jeda pake detik
        }
        cout<<endl;
        if (i<jeda.size()){
            this_thread::sleep_for(chrono::duration<double>(jeda[i]));
        }
    }
}

int main(){
    print_lirik();
    return 0;
}
