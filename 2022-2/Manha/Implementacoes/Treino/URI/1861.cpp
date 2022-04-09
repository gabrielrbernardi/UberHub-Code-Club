#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> map1, map2;
    string str, nomeAssassino, nomeAssassinado;

    while(getline(cin, str)){
    // for(int i = 0; i < 6; i++){
    //     getline(cin, str);
        int pos = str.find(" ");
        nomeAssassino = str.substr(0, pos);
        nomeAssassinado = str.substr(pos+1, str.size());

        if(map1.find(nomeAssassino) == map1.end()){
            map1.insert({nomeAssassino, 0});
        }
        if(map2.find(nomeAssassinado) == map2.end()){
            map2.insert({nomeAssassinado, 0});
        }
        if(map1.find(nomeAssassino) != map1.end()){
            map1[nomeAssassino] += 1;
        }
        if(map2.find(nomeAssassinado) != map2.end()){
            map2[nomeAssassinado] += 1;
        }

    }
    cout << "HALL OF MURDERERS" << endl;
    for(auto it: map1){
        int val = map2[it.first];
        if(!val){ //Se o assassino nao estiver na lista de assassinados, mostra-se o valor
            cout << it.first << " " << it.second << endl;
        }
    }
}