#include <iostream>
using namespace std;

int _binary_search(int, int[], int);

int main(){
	int n, k;
	while (cin >> n >> k){
		int a[n];
		int b[k];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ans[k];
		for (int i = 0; i < k; i++){
			cin >> b[i];
			cout << _binary_search(n, a, b[i]) << endl;
		}
	}
	return 0;
}

int _binary_search(int n, int a[], int b){
	int l = 0, r = n - 1;
	while (l <= r){
		int m = (l + r)/2;
		if (a[m] == b){
			return m + 1;
		} else if (a[m] > b){
			r = m - 1;
		} else{
			l = m + 1;
		}
	}
	return 0;
}
