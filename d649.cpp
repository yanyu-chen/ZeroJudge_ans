#include <iostream>
using namespace std;

int main(){
	int n;

	while(cin >> n && n != 0){
		int a = n;

		while (n > 0){
			int i = 1;

			while (i < n){
				cout << "_";
				i += 1;
			}
			
			int j = a - i + 1;
			
			while (j > 0){
				cout << "+";
				j -= 1;
			}
			cout << endl;
			n -= 1;
		}
	}
	return 0;
}
