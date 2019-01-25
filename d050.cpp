#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		cout << n - 15 + 24*(n-15 < 0) << endl;
	}
	return 0;
}
