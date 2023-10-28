#include <bits/stdc++.h>
using namespace std;
/*
    Faca a leitura de 9 elementos em uma matriz 3x3
    Mostrar os valores da matriz
*/

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

//    int i, j;
//
//    i = 0;
//    while(i < 3){
//        j = 0;
//        while(j < 3){
//            cin >> mat[i][j];
//            j++;
//        }
//        i++;
//    }
//
//    i = 0;
//    while(i < 3){
//        j = 0;
//        while(j < 3){
//            cout << mat[i][j] << " ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
}
