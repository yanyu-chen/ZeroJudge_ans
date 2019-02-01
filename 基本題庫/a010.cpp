#include <iostream>
using namespace std;

int main(){
	int a;
	while(cin >> a){
		int b = 0;
		for (int i = 2; i <= a; i++){
			int power = 0;
			
			while (a % i == 0){
				a /= i;
				power += 1;
			}

			if (power == 1 && b == 0){
				cout << i;
				b += 1;
			} else if (power == 1 && b == 1){
				cout << " * " << i;
			} else if (power > 1 && b == 0){
				cout << i << "^" << power;
				b += 1;
			} else if (power > 1 && b == 1){
				cout << " * " << i << "^" << power;
			}
		}
		cout  << endl;
	}
	return 0;
}
