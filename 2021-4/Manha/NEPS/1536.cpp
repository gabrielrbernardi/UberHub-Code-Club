#include <bits/stdc++.h>
using namespace std;

int main(){
    int ano;
    cin >> ano;
    if(ano <= 1979){
        cout << "Geracao X!!!" << endl;
    }else if(ano >= 1980 && ano <= 1995){
        cout << "Geracao Millennials. Muito cringe!!!" << endl;
    }else if(ano >= 1996 && ano <= 2010){
        cout << "Geracao Z!!!" << endl;
    }else{
        cout << "Geracao Alpha!!!" << endl;
    }
}
