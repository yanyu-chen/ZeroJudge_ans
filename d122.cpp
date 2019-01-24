#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned long int n;
	while (cin >> n){
		if (n == 0){
			cout << "0" << endl;
		} else{
			unsigned long int count5 = 0;
			for (int j = 1; pow(5, j) <= n; j++){
					count5 += n/pow(5, j);
			}
			cout << count5 << endl;
		}
	}
	return 0;
}
