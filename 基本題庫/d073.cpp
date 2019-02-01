#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		n = n/3 + (n%3 != 0);
		cout << n << endl;
	}
	return 0;
}
