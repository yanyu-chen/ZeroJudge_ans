#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int x[n];
		for (int i = 0; i < n; i++){
			cin >> x[i];
		}
		int dif = 0;
		int count = 0;
		int j = 0, k = n-1;
		for (int i = 0; i < n*n; i++){
			if (dif <= 0){
				dif += x[j];
				j += 1;
				count += dif == 0 ? 1 : 0;
			} else if (dif > 0){
				dif -= x[k];
				k -= 1;
				count += dif == 0 ? 1 : 0;
			}
			if (j == n && dif == 0){
				break;
			}
		}
		cout << count << endl;
	}
	return 0;
}
