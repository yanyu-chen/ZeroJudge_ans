#include <iostream>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		int food[n], ans[m], Sum[n], sum = 0;
		for (int i = 0; i < n; i++){
			cin >> food[i];
			sum += food[i];
			Sum[i] = sum;
		}
		for (int i = 0; i < m; i++){
			int l, r;
			ans[i] = 0;
			cin >> l >> r;
			ans[i] = l-1 == 0 ? Sum[r-1] : Sum[r-1] - Sum[l-2];
		}
		for (int i = 0; i < m; i++){
			cout << ans[i] << endl;
		}
	}
	return 0;
}
