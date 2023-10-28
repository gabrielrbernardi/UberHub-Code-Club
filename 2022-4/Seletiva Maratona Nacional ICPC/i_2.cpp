#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 8; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int flag = 0;
    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) == 9){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "F" << endl;
    }else{
        cout << "S" << endl;
    }
}