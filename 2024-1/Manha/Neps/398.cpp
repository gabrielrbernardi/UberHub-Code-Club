#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    char c;
    cin >> c;
    cout << count(str.begin(), str.end(), c) << endl;
}