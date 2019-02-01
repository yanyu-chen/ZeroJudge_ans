#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int sum = 0;
		int m = n;
		while(n > 0){
			int a;
			cin >> a;
			sum += a;
			n -= 1;
		}

		if (sum <= 59*m){
			cout << "yes" << endl;
		} else{
			cout << "no" << endl;
		}
	}
	return 0;
}
