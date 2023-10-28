#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &vet) {
    for (int i = 1; i < vet.size(); i++) {
		int atual = vet[i];
		int j = i - 1; // j recebera o indice do valor anterior
		while ((j >= 0) && (vet[j] > atual)) {
			vet[j + 1] = vet[j];
			j--;
        }
        vet[j + 1] = atual;
    }
}

int main(){
    vector<int> vet;
    vet.push_back(23);
    vet.push_back(221);
    vet.push_back(12);
    vet.push_back(-2);
    vet.push_back(0);
    vet.push_back(4);
    mostraVetor(vet);
    insertionSort(vet);
    mostraVetor(vet);
}
