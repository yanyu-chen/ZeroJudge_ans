#include <iostream>
using namespace std;

int main(){
	int a[3];
	while (cin >> a[0] >> a[1] >> a[2]){
		int max = 0;
		for (int i = 0; i < 3; i++){
			max = max > a[i] ? max : a[i]; 
		}
		cout << max << endl;
	}
	return 0;
} 
