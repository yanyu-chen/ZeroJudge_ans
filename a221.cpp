#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		string dummy;
		getline(cin, dummy); // for the problem of cin before getline
		for (int i = 1; i <= n; i++){
			string str1;
			string str2;
			getline(cin, str1);
			getline(cin, str2);
			cout << "Case " << i << ": ";
			if (!str1.compare(str2)){
				cout << "Yes" << endl;
			} else{
				string str3, tmp;
				stringstream ss(str1);
				while (ss >> tmp){
					str3 += tmp;
				}
				if (!str3.compare(str2)){
					cout << "Output Format Error" << endl;
				} else{
					cout << "Wrong Answer" << endl; 
				}
			}
		}
	}
	return 0;
}
