#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	ios_base::sync_with_stdio(false);
	cin.tie(0); // for TLE problem
	while(cin >> n){
		for (int i = 0; i < n; i++){
			int sum = 0;
			char a[16];
			for (int j = 0; j < 16; j++){
				cin >> a[j];
				if (j % 2 == 0){
					int tmp = 2*(a[j] - '0');
					for (int k = 0; tmp != 0; k++){
						sum += tmp % 10;
						tmp /= 10;
						sum %= 10;
					}
				} else{
					int tmp = a[j] - '0';
					sum += tmp;
					sum %= 10;
				}
			}
			if (sum == 0){
				cout << "Valid" << '\n';
			} else{
				cout << "Invalid" << '\n';
			}
		}
	}
	return 0;
}
