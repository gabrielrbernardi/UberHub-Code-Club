#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    cin >> aux;
    vet.push_back(aux);
    for(int i = 1; i < 10; i++){
        int temp = vet[i-1]*2;
        vet.push_back(temp);
    }
    for(int i = 0; i < vet.size(); i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
