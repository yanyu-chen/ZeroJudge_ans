#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b;
	while (cin >> a >> b){
		int count = 0;
		for (int i = a; i <= b; i++){
			int k = 0;
			if (i == 1){
				continue;
			}
			// use the fact of the prime number for the TLE problem
			for (int j = 2; j <= sqrt(i); j++){
				if (i%j == 0){
					k += 1;
					break;
				} else if (i%j != 0){
					k += 0;
				}
			}
			count += k > 0 ? 0: 1;
		}
		cout << count << endl;
	}
	return 0;
}
