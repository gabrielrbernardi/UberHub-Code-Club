#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    //scanf("%s", str);

//    getline(cin, str);
    //scanf("%[^\n]", str);

    cout << str << endl;
    //printf("%s\n", str);

    str.push_back('.');

    string aux = ", bom dia!";
    str.append(aux);
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;

    cout << "O tamanho da string eh: " << str.size() << endl;
    int qtdEspacos = count(str.begin(), str.end(), ' ');
    cout << "O tamanho da string sem espacos eh: " << str.size() - qtdEspacos << endl;
}

