#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char letra;
    cin >> s;
    cin >> letra;
    int qtdVezes = count(s.begin(), s.end(), letra);
    cout << qtdVezes << endl;
}
