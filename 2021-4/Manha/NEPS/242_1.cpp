#include <iostream>

using namespace std;

string title(string F){
	F[0] = toupper(F.at(0));
	for(int i = 1; i < F.size(); i++){
        if(F.at(i - 1) == ' '){ /// se eh a primeira letra da palavra
            if(F.at(i) >= 'a' && F.at(i) <= 'z'){
                F[i] -= 32;
            }
        }else{
            if(F.at(i) >= 'A' && F.at(i) <= 'Z'){
                F[i] += 32;
            }
        }
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
