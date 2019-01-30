#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		pair<int, int> a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i].first >> a[i].second;
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++){
			cout << a[i].first << " " << a[i].second << endl;
		}
	}
	return 0;
}
