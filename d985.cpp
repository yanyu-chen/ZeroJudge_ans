#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		unsigned int ans[n][2];
		for (int i = 0; i < n; i++){
			int k;
			cin >> k;
			unsigned int min, tmp;
			cin >> tmp >> min;
			min += tmp*60;
			unsigned int avg = min;
			for (int j = 0; j < k-1; j++){
				int a, b;
				cin >> a >> b;
				avg += a*60 + b;
				if (a*60 + b < min){
					min = a*60 + b;
				}
			}
			avg /= k;
			ans[i][0] = min;
			ans[i][1] = avg;
		}
		for (int i = 0; i < n; i++){
			cout << "Track " << i+1 << ":" << endl;
			cout << "Best Lap: " << ans[i][0]/60 << " minute(s) " << ans[i][0]%60 << " second(s). " << endl;
			cout << "Average: " << ans[i][1]/60 << " minute(s) " << ans[i][1]%60 << " second(s). " << endl;
			cout << endl;
		}
	}
	return 0;
}
