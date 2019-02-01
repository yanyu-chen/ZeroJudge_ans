#include <iostream>
using namespace std;

int abs(int);

int main(){
	int n;
	while (cin >> n){
		cout << abs(n) << endl;
	}
	return 0;
}

int abs(int a){
	return a < 0 ? -a : a;
}
