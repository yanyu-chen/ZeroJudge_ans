#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int sum = 0;
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			sum += a*(i+1);
		}
		cout << sum << endl;
	}
	return 0;
}
