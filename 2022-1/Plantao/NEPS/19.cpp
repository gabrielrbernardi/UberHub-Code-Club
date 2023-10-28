#include <bits/stdc++.h>

using namespace std;

int main(){
    int nroPe, qtdPes;
    char ladoPe;
    cin >> qtdPes;
    int esquerdo[qtdPes], direito[qtdPes];
    int qtdEsquerdo = 0, qtdDireito = 0;

    for(int i = 0; i < qtdPes; i++){
        cin >> nroPe;
        cin >> ladoPe;
        if(ladoPe == 'E'){
            esquerdo[qtdEsquerdo] = nroPe;
            qtdEsquerdo++;
        }else{
            direito[qtdDireito] = nroPe;
            qtdDireito++;
        }
    }

    int pe, qtdVezesPeApareceEsq = 0, qtdVezesPeApareceDir = 0, pares = 0;
    int valoresVerificados[qtdPes], qtdValoresVerificados = 0;
    for(int i = 0; i < qtdEsquerdo; i++){
        int bandeira = 0;
        for(int j = 0; j < qtdValoresVerificados; j++){
            if(esquerdo[i] == valoresVerificados[j]){
                bandeira = 1;
                break;
            }else{
                bandeira = 0;
            }
        }
        if(bandeira == 1){
            continue;
        }else{
            pe = esquerdo[i];
            valoresVerificados[qtdValoresVerificados] = pe;
            for(int j = 0; j < qtdEsquerdo; j++){
                if(pe == esquerdo[j]){
                    qtdVezesPeApareceEsq++;
                }
            }
            for(int j = 0; j < qtdDireito; j++){
                if(pe == direito[j]){
                    qtdVezesPeApareceDir++;
                }
            }
            if(qtdVezesPeApareceEsq != 0 && qtdVezesPeApareceDir != 0){
                if(qtdVezesPeApareceDir < qtdVezesPeApareceEsq){
                    pares = pares + qtdVezesPeApareceDir; 
                }else{
                    pares = pares + qtdVezesPeApareceEsq;
                }
            }
            qtdValoresVerificados++;
            qtdVezesPeApareceEsq = 0;
            qtdVezesPeApareceDir = 0;
        }
    }
    cout << pares << endl;
}