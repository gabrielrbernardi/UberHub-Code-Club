#include <iostream>

using namespace std;

string title(string F){
	F[0] = toupper(F[0]);
	for(int i = 1; i < F.size(); i++){
        if(F.at(i-1) == ' '){
            F[i] = toupper(F[i]);
        }else{
            F[i] = tolower(F[i]);
        }
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
