#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, busca;
    cin >> str;
    cin >> busca;
    int qtd = count(str.begin(), str.end(), busca.at(0));
    cout << qtd << endl;
}
