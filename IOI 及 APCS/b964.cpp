#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int a[n];
		int most_and_below60 = -1;
		int least_and_above60 = 101;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] >= 60 && least_and_above60 > a[i]){
				least_and_above60 = a[i];
			}
			if (a[i] < 60 && most_and_below60 < a[i]){
				most_and_below60 = a[i];
			}
		}
		sort(a, a + n);
		for (int i = 0; i < n-1; i++){
			cout << a[i] << " ";
		}
		cout << a[n-1] << endl;
		if (most_and_below60 == -1){
			cout << "best case" << endl;
		} else{
			cout << most_and_below60 << endl;
		}
		if (least_and_above60 == 101){
			cout << "worst case" << endl;
		} else{
			cout << least_and_above60 << endl;
		}
	}
	return 0;
}
