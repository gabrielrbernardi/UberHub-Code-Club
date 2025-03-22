#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int mat[3][3];
    for(int i  = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    vector<int> soma;
    int temp_soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            temp_soma += mat[i][j];
        }
        soma.push_back(temp_soma);
        temp_soma = 0;
    }
    for(int i = 0; i < 3; i++){
        cout << "Linha " << i << ": " << soma[i] << endl;
        // cout << "Linha " << i << ": " << soma.at(i) << endl;

    }
}