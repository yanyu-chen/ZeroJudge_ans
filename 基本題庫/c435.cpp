#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int max = 0;
		int upper = a[0], lower = a[1];
		for (int i = 0; i < n-1; i++){
			if (a[i] < upper){
				continue; // guess for the TLE problem of #6 
			}
			for (int j = i+1; j < n; j++){
				if (a[i] < a[j]){
					continue;
				} else if (max < a[i] - a[j]){
					max = a[i] - a[j];
					upper = a[i];
					lower = a[j];
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}
