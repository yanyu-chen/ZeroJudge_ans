#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int ans[n];
		for (int i = 0; i < n; i++){
			int t;
			cin >> t;
			int a[t];
			for (int j = 0; j < t; j++){
				cin >> a[j];
			}
			sort(a, a+t);
			int count = 0;
			for (int j = 0; j < t-2; j++){
				for (int k = j+1; k < t-1; k++){
					for (int w = k+1; w < t; w++){
						if (a[j]*a[j] + a[k]*a[k] == a[w]*a[w]){
							count += 1;
						}
					}
				}
			}
			ans[i] = count;
		}
		for (int i = 0; i < n; i++){
			cout << ans[i] << endl;
		}
	}
	return 0;
}
