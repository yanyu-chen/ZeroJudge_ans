#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		int k = 0; 
		for (int i = n; i <= m; i++){
			int length = 1;
			for (int j = 1; i >= pow(10, j); j++){
				length += 1;
			}
			int sum = 0;
			int a = i;
			for (int j = 0; j < length; j++){
				sum += pow(a%10, length);
				a /= 10;
			} 
			if (sum == i){
				cout << i << " ";
				k += 1;
			}
		}
		if (k == 0){
			cout << "none" << endl;
		} else{
			cout << endl;
		}
	}
	return 0;
}
