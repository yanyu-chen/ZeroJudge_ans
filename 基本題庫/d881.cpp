#include <iostream>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		int b = 1;
		int sum = 1;
		for (int i = 0; i < 49; i++){
		int a = 1 + d*i;
		b += a;
		sum += b;
		}
		cout << sum << endl;
	}
	return 0;
}
