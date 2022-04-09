#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, string> mapa;

    mapa.insert({3, "gabriel"});
    mapa.insert({2, "juliana"});
    mapa.insert({100, "roberto"});

    for(auto it: mapa) {
        cout << it.first << " " << it.second << endl;
    }

    mapa.erase(3);

    cout << endl;
    for(auto it = mapa.begin(); it != mapa.end(); i++){
        cout << it->first << " " << it->second << endl;
    }


}