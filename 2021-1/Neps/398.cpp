#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    char c;
    cin >> str;
    cin >> c;
    cout << count(str.begin(), str.end(), c) << endl;
}