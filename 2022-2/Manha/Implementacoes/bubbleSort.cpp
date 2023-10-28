#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &vet) {
    int temp;
    for(int i = 0; i < vet.size(); i++) {
        for(int j = i + 1; j < vet.size(); j++){
            if(vet[j] < vet[i]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}


int main(){
    int A[] = {23, 221, 12, -2, 0, 4};
    vector<int> vet;
    vet.push_back(23);
    vet.push_back(221);
    vet.push_back(12);
    vet.push_back(-2);
    vet.push_back(0);
    vet.push_back(4);
    mostraVetor(vet);
    bubbleSort(vet);
    mostraVetor(vet);
}
