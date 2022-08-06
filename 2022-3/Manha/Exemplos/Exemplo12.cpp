#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome = "joao silva";
    // getline(cin, nome);
    cout << "O nome digitado eh: " << nome << endl;
    cout << "O tamanho da string eh: " << nome.size() << endl;
    cout << "A primeira letra eh: " << nome.at(0) << endl;
    cout << "A quarta letra eh: " << nome.at(3) << endl;
    // nome.push_back(' ');
    nome.append(" ferreira");
    cout << "A string ficou: " << nome << endl;
    string str;
    str = nome;
    cout << "o conteudo de str eh: " << str << endl;
    str.erase(5, 6);
    cout << "A str agora ficou: " << str << endl;
    cout << "O nome ainda eh: " << nome << endl;
    reverse(str.begin(), str.end());
    cout << "A str invertida ficou: " << str << endl;
    int qtd;
    qtd = count(nome.begin(), nome.end(), 'i');
    cout << "A quantidade de vezes que i aparece eh: " << qtd << endl;

}