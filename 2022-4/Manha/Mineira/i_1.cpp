#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    if(count(str.begin(), str.end(), '9') == 0){
        cout << "S" << endl;
    }else{
        cout << "F" << endl;
    }
}