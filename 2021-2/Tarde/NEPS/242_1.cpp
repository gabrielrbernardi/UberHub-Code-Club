#include <bits/stdc++.h>
using namespace std;

bool ehMinusculo(char x){
    if(x >= 'a' && x <= 'z'){ ///se for minusculo
        return true;
    }else{                    /// se for maiusculo
        return false;
    }
}

string title(string F){
	string saida;
	saida.resize(F.size());
	if(ehMinusculo(F[0]) == true){  ///se for minusculo
        saida[0] = F[0] - 32;       ///Transforma caractere para maiusculo
	}else{
        saida[0] = F[0];
	}
	for(int i = 1; i < F.size(); i++){
        if(F[i] == ' '){
            saida[i] = F[i];
        }else if(ehMinusculo(F[i]) == true && F[i-1] == ' '){
            saida[i] = F[i] - 32; ///Transforma caractere para maiusculo
        }else if(ehMinusculo(F[i]) == false && F[i-1] == ' '){
            saida[i] = F[i];
        }else if(ehMinusculo(F[i]) == false){  ///se o valor na posicao for maiusculo e estiver no meio da palavra
            saida[i] = F[i] + 32;              ///transforma para minusculo
        }else{
            saida[i] = F[i];
        }
	}
	return saida;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
