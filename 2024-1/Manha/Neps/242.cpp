#include <iostream>

using namespace std;

char converte_para_maiusculo(char c){
    if (c >= 'a' && c <= 'z'){ //verifica se eh minusculo
        c -= 32; //c = c - 32;
    }
    return c;
}

char converte_para_minusculo(char c){
    c = c + 32;
    return c;
}

string title(string F){
	F[0] = converte_para_maiusculo(F[0]);

    for(int i = 1; i < F.size(); i++){
        if(F.at(i) == ' '){
            F[i+1] = converte_para_maiusculo(F[i+1]); 
        }

        if ((F.at(i) >= 'A' && F.at(i) <= 'Z') && F.at(i-1) == ' '){
            continue;
        }else if(F.at(i) >= 'A' && F.at(i) <= 'Z'){
            F[i] = converte_para_minusculo(F[i]);
        }
    }
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
