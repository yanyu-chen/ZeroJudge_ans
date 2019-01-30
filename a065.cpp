#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string str;
	while (cin >> str){
		int ans[6];
		for (int i = 0; i < 6; i++){
			ans[i] = abs(str[i] - str[i+1]);
		}
		for (int i = 0; i < 6; i++){
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}
