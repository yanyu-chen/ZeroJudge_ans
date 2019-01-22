#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int sum = 1;
		for (int i = 0; i < n; i++){
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
} 
