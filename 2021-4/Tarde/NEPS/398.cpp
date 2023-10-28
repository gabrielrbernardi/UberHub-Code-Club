#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    char letra;
    cin >> letra;
    
//    int qtdVezes = 0;
//    for(int i = 0; i < str.size(); i++){
//        if(str.at(i) == letra){
//            qtdVezes++;
//        }
//    }
//    cout << qtdVezes << endl;
    
    cout << count(str.begin(), str.end(), letra) << endl;
}
