#include<bits/stdc++.h>

using namespace std;

typedef struct{
    int id, qtdPontosCampeonato, qtdPontosMarcados, qtdPontosRecebidos;
    double mediaPontos;
} Times;

int buscaIndice(vector<Times> vet, int id){
    for(int i = 0; i < vet.size(); i++) {
        if(vet.at(i).id == id){
            return i;
        }
    }
    return -1;
}

int main(){
    int instanciaAtual = 0;
    while(1){
        int qtdTimes;
        cin >> qtdTimes;    
        if(qtdTimes == 0){
            break;
        }
        vector<Times> vetTimes;
        Times t1, t2;
        for(int i = 0; i < (qtdTimes * (qtdTimes-1) / 2); i++) {
            cin >> t1.id >> t1.qtdPontosMarcados >> t2.id >> t2.qtdPontosMarcados;
            if(t1.qtdPontosMarcados > t2.qtdPontosMarcados){
                cout << "Time 01 ganhou: " << t1.id << endl;
                int idx01 = buscaIndice(vetTimes, t1.id);
                if(idx01 != -1){
                    vetTimes[idx01].qtdPontosMarcados += t1.qtdPontosMarcados;
                    vetTimes[idx01].qtdPontosRecebidos += t2.qtdPontosMarcados;
                    vetTimes[idx01].qtdPontosCampeonato += 2;                  
                }else{
                    t1.qtdPontosCampeonato = 2;
                    t1.qtdPontosRecebidos = t2.qtdPontosMarcados;
                    vetTimes.push_back(t1);
                }
                int idx02 = buscaIndice(vetTimes, t2.id);
                if(idx02 != -1){
                    vetTimes[idx02].qtdPontosMarcados += t2.qtdPontosMarcados;
                    vetTimes[idx02].qtdPontosRecebidos += t1.qtdPontosMarcados;
                    vetTimes[idx02].qtdPontosCampeonato += 1;
                }else{
                    t2.qtdPontosCampeonato = 1;
                    t2.qtdPontosRecebidos = t1.qtdPontosMarcados;
                    vetTimes.push_back(t2);
                }
            }else{
                cout << "time 02 ganhou: " << t2.id << endl;
                int idx01 = buscaIndice(vetTimes, t1.id);
                if(idx01 != -1){
                    vetTimes[idx01].qtdPontosMarcados += t1.qtdPontosMarcados;
                    vetTimes[idx01].qtdPontosRecebidos += t2.qtdPontosMarcados;
                    vetTimes[idx01].qtdPontosCampeonato += 1;                  
                }else{
                    t1.qtdPontosCampeonato = 1;
                    t1.qtdPontosRecebidos = t2.qtdPontosMarcados;
                    vetTimes.push_back(t1);
                }
                int idx02 = buscaIndice(vetTimes, t2.id);
                if(idx02 != -1){
                    vetTimes[idx02].qtdPontosMarcados += t2.qtdPontosMarcados;
                    vetTimes[idx02].qtdPontosRecebidos += t1.qtdPontosMarcados;
                    vetTimes[idx02].qtdPontosCampeonato += 2;
                }else{
                    t2.qtdPontosCampeonato = 2;
                    t2.qtdPontosRecebidos = t1.qtdPontosMarcados;
                    vetTimes.push_back(t2);
                }
            }
        }
        cout << "Instancia " << instanciaAtual+1 << endl;
        for(int i = 0; i < vetTimes.size(); i++) {
            cout << vetTimes.at(i).id << " " << vetTimes.at(i).qtdPontosCampeonato << endl;
        }
    }
}