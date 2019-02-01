#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1, str2[500];
	int n = 0;
	while (getline(cin, str1)){
		bool test = true;
		for (int i = 0; i < n; i++){
			if (str1 == str2[i]){
				cout << "YES" << endl;
				test = false;
				break;
			}
		}
		if (test){
			cout << "NO" << endl;
		}
		str2[n] = str1;
		n += 1;
	}
	return 0;
}
