#include <bits/stdc++.h>

using namespace std;

double media_vetor(int n, int v[]){
	int soma = 0;
	for(int i = 0; i < n; i++){
        soma += v[i]; /// soma = soma + v[i]
	}
	double media = soma / (double) n;
	return media;
}

int main(){

	int n, v[100100];
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> v[i];

    ///printf("%.2lf\n", media_vetor(n,v));
    
	cout << setprecision(2) << fixed;

	cout << media_vetor(n,v) << "\n";
}
