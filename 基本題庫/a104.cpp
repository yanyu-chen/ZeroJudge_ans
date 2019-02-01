#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int ser[n];
		for (int i = 0; i < n; i++){
			cin >> ser[i];
		}
		int ans[n];
		for (int i = 0; i < n; i++){
			ans[i] = ser[i];
			for (int j = i; j < n; j++){
				ans[i] = ans[i] < ser[j] ? ans[i]: ser[j];
			}
			cout << ans[i] << " ";
			for (int j = i+1; j < n; j++){
				if (ans[i] == ser[j]){
					ser[j] = ser[i];
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
