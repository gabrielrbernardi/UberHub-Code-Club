#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, busca;
    cin >> str;
    cin >> busca;
    int qtdVezes = count(str.begin(), str.end(), busca.at(0));
    cout << qtdVezes << endl;
}
 