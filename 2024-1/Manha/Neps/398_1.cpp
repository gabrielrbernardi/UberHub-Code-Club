#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    string busca;
    cin >> busca;
    cout << count(str.begin(), str.end(), busca.at(0)) << endl;
}