#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet, indices;
    int temp, busca;
    for(int i = 0; i < 10; i++){
        cin >> temp;
        vet.push_back(temp);
    }
    cin >> busca;
    for(int i = 0; i < 10; i++){
        if(busca == vet.at(i)){
            indices.push_back(i);
        }
    }
    if(indices.size() == 0){
        cout << "Mia X" << endl;
    }else{
        cout << indices.size() << endl;
        for(int i = 0; i < indices.size() - 1; i++){
            cout << indices.at(i) << " ";
        }
        cout << indices.at(indices.size() - 1) << endl;
    }
}