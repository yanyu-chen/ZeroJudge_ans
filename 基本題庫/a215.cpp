#include <iostream>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		int sum = 0;
		int index = 0;
		for (int i = 0; ; i++){
			int a = n + i;
			sum += a;
			index += 1;
			if (sum > m){
				cout << index << endl;
				break;
			}
		}
	}
	return 0;
}
