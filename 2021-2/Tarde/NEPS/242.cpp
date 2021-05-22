#include <bits/stdc++.h>
using namespace std;

string title(string F){
	string saida;
	saida.resize(F.size());
	saida[0] = toupper(F[0]);
	for(int i = 1; i < F.size(); i++){
        if(F[i - 1] == ' '){
            saida[i] = toupper(F[i]);
        }else{
            saida[i] = tolower(F[i]);
        }
	}
	return saida;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
