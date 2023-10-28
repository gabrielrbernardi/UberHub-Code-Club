#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome1, nome2, palavra;
    int qtd;
    cin >> nome1 >> nome2;
    if(nome1 == "Reluew" && nome2 == "Markinhos"){  ///Comparacao das strings
        cin >> qtd;
        cin >> palavra;
        for(int i = 0; i < palavra.size(); i++){ ///percorrendo a string
            palavra[i] = palavra[i] + qtd;
        }
        cout << palavra << endl;
    }else{
        cout << "Nao eh possivel descriptografar!" << endl;
    }
}
