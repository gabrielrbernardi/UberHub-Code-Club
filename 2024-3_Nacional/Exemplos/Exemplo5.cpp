#include <bits/stdc++.h>
using namespace std;

int main(){
    int valor_x, valor_y;
    for(;;){
        cin >> valor_x;
        if(valor_x == -1){
            cout << "Foi solicitada a parada!" << endl;
            break;
        }
        cin >> valor_y;
        cout << valor_x * valor_y << endl;
    }
}