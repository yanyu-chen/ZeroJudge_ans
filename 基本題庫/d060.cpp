#include <iostream>
using namespace std;

int main(){
	int a;
	while (cin >> a){
		cout << (25 - a)*(a < 25) + (85 - a)*(a > 25) << endl;
	}
	return 0;
}
