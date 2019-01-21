#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	while(cin >> a){
		int sum = 0;
		for (int i = 2; i <= a; i++){
			while (a % i == 0){
				a /= i;
				sum += i;
			}
			if (i > sqrt(a) && sum == 0){
				sum = a;
				break;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
