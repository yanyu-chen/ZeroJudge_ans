#include <iostream>
using namespace std;

int main(){
	int a;
	while(cin >> a){
		int max = 0;
		while (a > 0){
			int b;
			cin >> b;
			a -= 1;
			max = max > b ? max : b;
		}
		cout << max << endl;
	}
	return 0;
}
