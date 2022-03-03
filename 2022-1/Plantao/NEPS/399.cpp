#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string palavra;
    cin >> palavra;
 
    string vogais = "aeiou";
    string vogaisEncontradas, consoantesEncontradas;
    int encontreiVogal = 0;

    for (int i = 0; i < palavra.size(); i++){
        for(int j = 0; j < vogais.size(); j++){
            if (palavra.at(i) == vogais.at(j)){
                vogaisEncontradas.push_back(palavra.at(i));
                encontreiVogal = 1;
                break;
            }else{
                encontreiVogal = 0;
            }
        }
        if(encontreiVogal == 0){
            consoantesEncontradas.push_back(palavra.at(i));
        }
    } 
    cout << "Vogais: " << vogaisEncontradas << endl;
    cout << "Consoantes: " << consoantesEncontradas << endl;
}