#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, letra;
    cin >> str >> letra;
    cout << count(str.begin(), str.end(), letra.at(0)) << endl;
}