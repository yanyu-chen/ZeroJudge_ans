#include <iostream>
#include <string>
using namespace std;

int main(){
	int a, b, c;
	while (cin >> a >> b >> c){
		string ans = to_string(a/b);
		ans.push_back('.');
		a %= b;
		for (int i = 0; i < c; i++){
			a *= 10;
			string tmp = to_string(a/b);
			ans.push_back(tmp[0]);
			a %= b;
		}
		cout << ans << endl;
	}
}
