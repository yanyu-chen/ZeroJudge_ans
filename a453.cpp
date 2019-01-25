#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		string ans[n];
		for (int i = 0; i < n; i++){
			int a, b, c;
			cin >> a >> b >> c;
			int delta = b*b - 4*a*c;
			if (delta < 0){
				ans[i] = "No";
			} else{
				for (int j = 0; j*j <= delta; j++){
				if (delta == j*j){
					ans[i] = "Yes";
					break;
				}
				ans[i] = "No";	
				}
			}
		}
		for (int i = 0; i < n; i++){
			cout << ans[i] << endl;
		}
	}
	return 0;
}
