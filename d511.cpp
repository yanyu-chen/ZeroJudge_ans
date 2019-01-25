#include <iostream>
using namespace std;

int abs(int);

int main(){
	int a[3], count = 0;
	for (int i = 0; i < 5; i++){
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] < a[1] + a[2] && a[1] < a[2] + a[0] && a[2] < a[0] + a[1] &&
			a[0] > abs(a[1] - a[2]) && a[1] > abs(a[2] - a[0]) && a[2] > abs(a[0] - a[1])){
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}

int abs(int a){
	return a < 0 ? -a : a;
}
