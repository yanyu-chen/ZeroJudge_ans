#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		string a[n+1];
		for (int i = 0; i < n+1; i++){
			getline(cin, a[i]); 
		}
		sort(a, a + n+1);
		//cout << endl;
		for (int i = 0; i < n+1; i++){
			cout << a[i] << endl; 
		}
	}
	return 0;
}
