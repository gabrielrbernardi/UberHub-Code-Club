#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    char c;
    cin >> str;
    cin >> c;
    int qtdVezes = count(str.begin(), str.end(), c);
    cout << qtdVezes << endl;
}