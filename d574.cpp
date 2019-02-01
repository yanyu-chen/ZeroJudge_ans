#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		char a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<string> v;
		char t = a[0];
		int count = 0;
		for (int i = 0; i < n; i++){
			if (t == a[i]){
				count++;
			} else{
				string tmp = to_string(count);
				tmp += t;
				v.push_back(tmp);
				t = a[i];
				count = 1;
			}
			if (i == n-1){
				string tmp = to_string(count);
				tmp += t;
				v.push_back(tmp);
			}
		}
		if (2*v.size() < n){
			for (int i = 0; i < v.size(); i++){
				cout << v[i];
			}
		} else{
			for (int i = 0; i < n; i++){
				cout << a[i];
			}
		}
		cout << endl;
	}
	return 0;
}
