#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long a, b, i;
	while(cin >> a){
		i = 0;
		b = 0;
		while (a > 0){
			b += a % 2 * pow(10,i);
			i += 1;
			a /= 2;
		}
		cout << b << endl;
	}
	return 0;
}
