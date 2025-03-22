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
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            temp_soma += mat[i][j];
        }
        soma.push_back(temp_soma);
        temp_soma = 0;
    }
    for(int i = 0; i < 3; i++){
        cout << "Coluna " << i << ": " << soma[i] << endl;
        // cout << "Coluna " << i << ": " << soma.at(i) << endl;

    }
}