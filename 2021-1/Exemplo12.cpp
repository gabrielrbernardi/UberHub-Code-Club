#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Uberhub", str2 = "Code Club";
    str.push_back(' ');
    str.append(str2);
    cout << str << endl;
    cout << count(str.begin(), str.end(), 'o') << endl;
}