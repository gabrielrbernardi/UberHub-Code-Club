#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    char c;
    cin >> c;
    int qtdVezes = count(str.begin(), str.end(), c);
    cout << qtdVezes << endl;
}