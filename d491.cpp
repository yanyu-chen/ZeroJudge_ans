#include <iostream>
using namespace std;

int main(){
	int a, b;
	while (cin >> a >> b){
		if (a > b){
			int temp = a;
			a = b;
			b = temp;
		}
		int start;
		for (int i = a; ; i++){
			if (i%2 == 0){
				start = i;
				break;
			}
		}
		int end;
		for (int i = b; ; i--){
			if (i%2 == 0){
				end = i;
				break;
			}
		}
		int term = (end - start) / 2 + 1;
		cout << (start + end) * term / 2 << endl;
	}
	return 0;
}
