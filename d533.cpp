#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		string ans[n];	
		for (int i = 0; i < n; i++){
			double a, b ,c ,d;
			cin >> a >> b >> c >> d;
			if ((int)b != 0 || (int)d != 0){
				ans[i] = "No";
			} else{
				if (a > c){
					ans[i] = ">";
				} else if (a < c){
					ans[i] = "<";
				} else{
					ans[i] = "=";
				}
			}
		}
		for (int i = 0; i < n; i++){
			cout << ans[i] << endl;
		}
	}
	return 0;
}
