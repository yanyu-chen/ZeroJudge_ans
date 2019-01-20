#include <iostream>
using namespace std;

int main(){
	long int a, b;
	while (cin >> a >> b){
		int count = 0;
		for (int i = a; i <= b; i++){
			if (i % 2 == 0){
				count += 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}
