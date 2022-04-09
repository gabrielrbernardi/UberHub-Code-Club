#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> pessoa;

    pessoa.insert({"gabriel", 20});
    pessoa.insert(make_pair("paula", 30));
    pessoa.insert(pair<string, int>("pedro", 10));
    pessoa["maria"] = 15;

    cout << "O tamanho do map eh: " << pessoa.size() << endl;

    for(auto it: pessoa) {
        cout << it.first << " " << it.second << endl;
    }

    if(!pessoa.empty()){ //se o map nao estiver vazio
        pessoa.clear(); //os elementos serao removidos
    }
}

