#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n; i++){
			if (a[i] % 4 == 0 && a[i] % 100 != 0 || a[i] % 400 == 0){
				cout << "a leap year" << endl;
			} else{
				cout << "a normal year" << endl; 
			}
		}
	}
	return 0;
}
