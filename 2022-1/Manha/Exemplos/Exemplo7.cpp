#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome, sobrenome;
    cin >> nome >> sobrenome;
    if(nome == sobrenome){
        cout << "nome e sobrenome iguais" << endl;
        return 0;
    }else{
        nome.push_back(' ');
        nome.append(sobrenome); //nome+=sobrenome; ou nome=nome+sobrenome;
        cout << "Nome completo: " << nome << endl;

        reverse(nome.begin(), nome.end());
        cout << "Nome completo invertido: " << nome << endl;

        int qtdVezes = count(nome.begin(), nome.end(), 'a');
        cout << "A qtd de vezes que a aparece no nome eh: " << qtdVezes << endl;
    }
}