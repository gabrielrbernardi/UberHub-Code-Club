#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> vet;
    vet.push_back(10);
    vet.push_back(8);
    vet.push_back(-2);
    vet.push_back(0);
    vet.push_back(20);
    vet.push_back(100);
    vet.push_back(0);
    cout << vet.at(0) << endl;
    cout << "O tamanho do vetor eh: " << vet.size() << endl;
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;

    reverse(vet.begin(), vet.end());

    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;

    cout << "A primeira posicao eh: " << vet.at(0) << endl;

    cout << "A quantidade de vezes que 0 aparece eh: " << count(vet.begin(), vet.end(), 0) << endl;
}
