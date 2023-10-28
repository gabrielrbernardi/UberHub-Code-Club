#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    char letra;
    cin >> letra;
    cout << count(str.begin(), str.end(), letra) << endl;
}

