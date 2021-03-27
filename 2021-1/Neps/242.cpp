#include <bits/stdc++.h>

using namespace std;

string title(string F){
	if(F[0] >= 97 && F[0] <= 122){
        F[0] = F[0] - 32;
    }
    for(int i = 1; i < F.size(); i++){
        if((F[i] >= 97 && F[i] <= 122) && F[i-1] == ' '){
            F[i] = F[i] - 32;
        }else if((F[i] >= 'A' && F[i] <= 'X') && F[i-1] != ' '){
            F[i] = F[i] + 32;
        }
    }
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}