#include <bits/stdc++.h>
using namespace std;

int main(){

    int qtd, val, valorAnterior, aux, qtdValoresMaiorSequencia = 1, qtdValoresSequencia = 1;
    vector<int> vet;

    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    for(int i = 0; i < vet.size(); i++){
        //se for o primeiro valor, ignora ele para as comparacoes
        if(i > 0){
            if(valorAnterior == vet.at(i)){
                qtdValoresSequencia++;
            }

            //se for final da sequencia. no caso, se o valor atual for diferente do valor anterior
            if(valorAnterior != vet.at(i)){
                //verifica se sequencia atual eh maior que o valor da maior sequencia armazenada
                if(qtdValoresSequencia > qtdValoresMaiorSequencia){
                    qtdValoresMaiorSequencia = qtdValoresSequencia;
                }
                qtdValoresSequencia = 1;
            }
        }
        //assimila o valor atual do vetor para a variavel anterior, que sera usada para comparacao dos valores
        valorAnterior = vet.at(i);
    }

    //se tiver acabado a sequencia de valores
    if(qtdValoresSequencia > qtdValoresMaiorSequencia){
        qtdValoresMaiorSequencia = qtdValoresSequencia;
    }
    
    cout << qtdValoresMaiorSequencia << endl;
}