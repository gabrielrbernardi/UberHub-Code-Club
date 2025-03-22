#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}