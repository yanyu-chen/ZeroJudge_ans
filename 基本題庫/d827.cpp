#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int a = n / 12;
		cout << a*50 + (n - a*12)*5 << endl; 
	}
	return 0;
}
