#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int mat[3][3];
    int temp_soma = 0;
    vector<int> vet_soma;
    for(int i  = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
            temp_soma += mat[i][j];
        }
        vet_soma.push_back(temp_soma);
        temp_soma = 0;
    }

    for()
    
}