#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n-1-i; j++){
				cout << "_";
			}
			for (int j = 0; j < 1+2*i; j++){
				cout << "*";
			}
			for (int j = 0; j < n-1-i; j++){
				cout << "_";
			}
			cout << endl;
		}
	}
}
