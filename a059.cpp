#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int ans[n];
		for (int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			int sum = 0;
			for (int j = 1; j*j <= b; j++){
				if (j*j >= a){
				sum += j*j;
				}
			}
			ans[i] = sum;
		}
		for (int i = 0; i < n; i++){
			cout << "Case " << i+1 <<": " << ans[i] << endl;
		}
	}
}
