#include <iostream>

using namespace std;

int ehDivisivelPor2(long long int x){
    if(x % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int ehDivisivelPor3(long long int x){
    if(x % 3 == 0){
        return 0;
    }else{
        return 1;
    }
}

int ehDivisivelPor5(long long int x){
    if(x % 5 == 0){
        return 0;
    }else{
        return 1;
    }
}


int main(){
	long long int x;
	cin >> x;
	if(ehDivisivelPor2(x) == 0){
        cout << "S" << endl;
	}else{
        cout << "N" << endl;
	}

    if(ehDivisivelPor3(x) == 0){
        cout << "S" << endl;
	}else{
        cout << "N" << endl;
	}

    if(ehDivisivelPor5(x) == 0){
        cout << "S" << endl;
	}else{
        cout << "N" << endl;
	}
}
