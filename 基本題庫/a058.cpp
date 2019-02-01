#include <iostream>
using namespace std;

int main(){
	int n;
	int a = 0;
	int b = 0;
	int c = 0;
	while (cin >> n){
		while(n > 0){
			int k;
			cin >> k;
			if (k%3 ==0){
				a += 1;
			} else if (k%3 == 1){
				b += 1;
			} else if (k%3 == 2){
				c += 1;
			}
			n -= 1;
		}
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}
