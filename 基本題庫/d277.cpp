#include <iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		cout << n - (n%2 != 0) << endl;
	}
	return 0;
}
