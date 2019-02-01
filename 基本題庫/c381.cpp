#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		if (n == 0 && m == 0){
			break;
		} else{
			string str;
			for (int i = 0; i < n ; i++){
				string a;
				cin >> a;
				str += a;
			}
			string ans;
			for (int i = 0; i < m ; i++){
				int a;
				cin >> a;
				ans += str[a-1];
			}
			cout << ans << endl;
		}
	}
	return 0;
}
