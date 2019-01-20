#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int ans[n];
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			if (a == 0){
				ans[i] = 0;
				continue;
			}
			int product = 1;
			int b = a;
			for (int j = 0; a >= pow(10,j); j++){
				product *= b%10;
				b /= 10;
			}
			ans[i] = product;
		}
		for (int i = 0; i < n; i++){
			cout << ans[i] << endl;
		}
	}
	return 0;
}
