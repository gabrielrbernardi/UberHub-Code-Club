#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string str1, str2;
        cin >> str1 >> str2;
        int tamanhoStr1 = str1.size(), tamanhoStr2 = str2.size();
        int tamanhoMaiorStr;

        if(tamanhoStr1 > tamanhoStr2){
            tamanhoMaiorStr = tamanhoStr1;
        }else{
            tamanhoMaiorStr = tamanhoStr2;
        }
        for(int j = 0; j < tamanhoMaiorStr; j++){
            if(tamanhoStr1 > j){
                cout << str1.at(j);
            }
            if(tamanhoStr2 > j){
                cout << str2.at(j);
            }
        }
        cout << endl;
    }
}
