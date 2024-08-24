#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    double valor;
    cin >> valor;

    if(valor >= 0.0 && valor <= 25.0){
        cout << "Intervalo [0,25]" << endl;
    }else if(valor > 25.0 && valor <= 50.0){
        cout << "Intervalo (25, 50]" << endl;
    }else if(valor > 50.0 && valor <= 75.0){
        cout << "Intervalo (50, 75]" << endl;
    }else if(valor > 75.0 && valor <= 100.0){
        cout << "Intervalo (75, 100]" << endl;
    }else{
        cout << "Fora de intervalo" << endl;
    }
}