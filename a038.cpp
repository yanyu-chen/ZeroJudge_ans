#include <iostream>
using namespace std;

int main(){
	int a, b;
	while(cin >> a){
		if (a == 0){
			cout << a << endl;
			continue;
		}
		while (a % 10 == 0){
			a /= 10;
		}
		while (a != 0){
			cout << a%10;
			a /= 10;	
		}
		cout << endl;
	}
	return 0;
}
