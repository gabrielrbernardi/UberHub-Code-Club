#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, vector<string>> turmas;
    vector<string> nomes;
    nomes.push_back("Aline");
    nomes.push_back("Daniela");

    turmas["intermediario1_1"] = nomes;

    vector<string> nomes2;
    nomes2.push_back("Gabriel");
    nomes2.push_back("Diogo");
    turmas["intermediario1_2"] = nomes2;
}