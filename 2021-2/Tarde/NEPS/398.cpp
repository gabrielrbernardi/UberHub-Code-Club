#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    char busca;
    cin >> str;
    cin >> busca;
    int qtdVezes = count(str.begin(), str.end(), busca);
    cout << qtdVezes << endl;
}