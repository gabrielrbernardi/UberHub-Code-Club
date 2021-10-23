#include <iostream>

using namespace std;

string title(string F){
	F[0] = toupper(F[0]);
	for(int i = 1; i < F.size(); i++){
        if(F.at(i - 1) == ' '){ /// se for a primeira letra de uma palavra
            F[i] = toupper(F[i]); ///passa o caractere para maiusculo
        }else{
            F[i] = tolower(F[i]); ///passa o caractere para minusculo
        }
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
