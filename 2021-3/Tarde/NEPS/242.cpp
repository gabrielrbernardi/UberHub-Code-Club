#include <iostream>

using namespace std;

string title(string F){
    if(F.at(0) >= 'a' && F.at(0) <= 'z'){ ///Indica que o char eh minusculo
        F[0] -= 32; ///Converte o char minusculo para maiusculo
    }
	for(int i = 1; i < F.size(); i++){
        if(F.at(i) >= 'A' && F.at(i) <= 'Z' && F.at(i-1) != ' '){
            F[i] += 32;
        }else if(F.at(i-1) == ' ' && F.at(i) >= 'a' && F.at(i) <= 'z'){
            F[i] -= 32;
        }
	}

	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
