#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(count(str.begin(), str.end(), '@') == 0 || count(str.begin(), str.end(), '.') == 0){
        cout << "formato incorreto" << endl;
    }else{
        cout << "OK" << endl;
    }
}