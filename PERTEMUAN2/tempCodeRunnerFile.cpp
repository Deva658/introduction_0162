
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

using namespace std;

void print_lirik(){
    vector<pair<string,double>> 
	baris= {
        {"how can i move on", 0.1},
        {"When i'm still in love with YOU?", 0.04},
        {"'Cause if one day you wake up", 0.06},
        {"And find that you're missing me", 0.04},
        {"And your heart start to wonder", 0.06},
        {"Where on this earth i could be", 0.05},
        {"Thinking maybe you'll come back", 0.05},
        {"Here to the place that we'd meet", 0.04},
        {"And you'll see me waiting for you", 0.05},
        {"On the corner of the street", 0.05},
        {"SO IM NOT MOVING", 0.13},
        {"IM NOT MOOVING", 0.22}
    };

    vector<double> jeda = {0.2, 0.1, 0.4, 0.1, 0.1, 0.4, 0.1, 0.4, 0.1, 0.4, 0.7};

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
