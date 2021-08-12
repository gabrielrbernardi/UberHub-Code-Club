#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, let;
    cin >> str;
    cin >> let;
    char letra = let[0];
    int cont = 0;
//    int cont = count(str.begin(), str.end(), letra);
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == letra){
            cont++;
        }
    }
    cout << cont << endl;
}
