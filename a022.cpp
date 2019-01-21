#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	while(cin >> a){
		bool test = true;
		int l = a.length(); 
		for (int i = 0; i < l/2 ; i++){
			if (a[i] != a[l-i-1]){
				cout << "no" << endl;
				test = false;
				break;
			} else{
				continue;
			}
		}
		if (test){
			cout << "yes" << endl;
		}
	}
	return 0;
}
