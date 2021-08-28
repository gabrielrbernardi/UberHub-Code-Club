#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vet2; ///seria a matriz

    int aux;
    for(int i = 0; i < 3; i++){
        vector<int> vet1;
        cout << "inserindo na " << i << " linha" << endl;
        for(int j = 0; j < 3; j++){
            cin >> aux;
            vet1.push_back(aux);
        }
        vet2.push_back(vet1);
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << vet2.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
