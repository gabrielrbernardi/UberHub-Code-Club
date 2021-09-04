#include <iostream>

using namespace std;

string title(string F){
	F[0] = toupper(F.at(0));
	for(int i = 1; i < F.size(); i++){
        if(F.at(i - 1) == ' '){ /// se eh a primeira letra da palavra
            F[i] = toupper(F.at(i));
        }else{
            F[i] = tolower(F.at(i));
        }
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
