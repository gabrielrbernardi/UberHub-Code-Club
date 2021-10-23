#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "UberHub Code Club";
    string str1 = "Gabriel";

//    cin >> str;

    cout << "O valor de str eh: " << str << endl;
    cout << "O tamanho de str eh: " << str.size() << endl;

    cout << "O caractere que esta na posicao 4 eh: " << str.at(4) << endl;
    for(int i = 0; i < str.size(); i++){
        cout << str.at(i);
    }
    cout << endl;

    str.push_back('.');
    cout << str << endl;

//    str1.append(", boa tarde!");
    str1 += ", boa tarde!";

    cout << str1 << endl;

    if(str == str1){
        cout << "strings iguais" << endl;
    }else{
        cout << "strings diferentes" << endl;
    }

    string str2;
    str2 = str1;
    cout << "O conteudo de str2 eh: " << str2 << endl;
    reverse(str2.begin(), str2.end());
    cout << "O novo conteudo de str2 eh: " << str2 << endl;

    string str3 = "aaaaaAAAAAAaaaaaaAAAAAaaaaaAAAAAAasahgsdah gdsahjsadjh ajhvdcjhv";
    cout << "O conteudo de str3 eh: " << str3 << endl;
    char letra1 = 'a';
    char letra2 = 'A';
    int qtdOcorrencias1 = count(str3.begin(), str3.end(), letra1);
    int qtdOcorrencias2 = count(str3.begin(), str3.end(), letra2);
    cout << "A letra a aparece " << qtdOcorrencias1 << " vezes" << endl;
    cout << "A letra A aparece " << qtdOcorrencias2 << " vezes" << endl;
    cout << "A quantidade de vezes que A/a aparece eh: " << qtdOcorrencias1 + qtdOcorrencias2 << endl;
    cout << "O tamanho de str3 eh: " << str3.size() << endl;
}

